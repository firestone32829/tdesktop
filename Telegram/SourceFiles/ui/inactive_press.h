/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui {

void MarkInactivePress(not_null<QWidget*> widget, bool was);
[[nodiscard]] bool WasInactivePress(not_null<QWidget*> widget);

} // namespace Ui