#include "Invoice.h"

Invoice::Invoice(const std::string& invoiceId) : invoiceId(invoiceId), dollarsOwed(0.0) {}

void Invoice::addServiceCost(double costDollars) {
    if (costDollars > 0) {
        dollarsOwed += costDollars;
    }
}

double Invoice::getDollarsOwed() const {
    return dollarsOwed;
}

std::string Invoice::getInvoiceId() const {
    return invoiceId;
}
