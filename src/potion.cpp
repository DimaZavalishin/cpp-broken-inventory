#include "potion.h"

Potion::Potion(const std::string& name, int quantity, int healing)
    : Item(name, quantity)
    , m_healing(healing < 0 ? 0 : healing)
{
}

int Potion::GetHealing() const noexcept
{
    return m_healing;
}

std::string Potion::Use()
{
    if (m_quantity == 0)
    {
        return "Empty: " + m_name;
    }

    --m_quantity;
    return "Drink: " + m_name;
}
