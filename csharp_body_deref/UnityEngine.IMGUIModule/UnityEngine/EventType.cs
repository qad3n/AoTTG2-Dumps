using System;
using System.ComponentModel;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000003")]
public enum EventType
{
	[Token(Token = "0x4000005")]
	MouseDown = 0,
	[Token(Token = "0x4000006")]
	MouseUp = 1,
	[Token(Token = "0x4000007")]
	MouseMove = 2,
	[Token(Token = "0x4000008")]
	MouseDrag = 3,
	[Token(Token = "0x4000009")]
	KeyDown = 4,
	[Token(Token = "0x400000A")]
	KeyUp = 5,
	[Token(Token = "0x400000B")]
	ScrollWheel = 6,
	[Token(Token = "0x400000C")]
	Repaint = 7,
	[Token(Token = "0x400000D")]
	Layout = 8,
	[Token(Token = "0x400000E")]
	DragUpdated = 9,
	[Token(Token = "0x400000F")]
	DragPerform = 10,
	[Token(Token = "0x4000010")]
	DragExited = 15,
	[Token(Token = "0x4000011")]
	Ignore = 11,
	[Token(Token = "0x4000012")]
	Used = 12,
	[Token(Token = "0x4000013")]
	ValidateCommand = 13,
	[Token(Token = "0x4000014")]
	ExecuteCommand = 14,
	[Token(Token = "0x4000015")]
	ContextClick = 16,
	[Token(Token = "0x4000016")]
	MouseEnterWindow = 20,
	[Token(Token = "0x4000017")]
	MouseLeaveWindow = 21,
	[Token(Token = "0x4000018")]
	TouchDown = 30,
	[Token(Token = "0x4000019")]
	TouchUp = 31,
	[Token(Token = "0x400001A")]
	TouchMove = 32,
	[Token(Token = "0x400001B")]
	TouchEnter = 33,
	[Token(Token = "0x400001C")]
	TouchLeave = 34,
	[Token(Token = "0x400001D")]
	TouchStationary = 35,
	[Token(Token = "0x400001E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use MouseDown instead (UnityUpgradable) -> MouseDown", true)]
	mouseDown = 0,
	[Token(Token = "0x400001F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use MouseUp instead (UnityUpgradable) -> MouseUp", true)]
	mouseUp = 1,
	[Token(Token = "0x4000020")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use MouseMove instead (UnityUpgradable) -> MouseMove", true)]
	mouseMove = 2,
	[Token(Token = "0x4000021")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use MouseDrag instead (UnityUpgradable) -> MouseDrag", true)]
	mouseDrag = 3,
	[Token(Token = "0x4000022")]
	[Obsolete("Use KeyDown instead (UnityUpgradable) -> KeyDown", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	keyDown = 4,
	[Token(Token = "0x4000023")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use KeyUp instead (UnityUpgradable) -> KeyUp", true)]
	keyUp = 5,
	[Token(Token = "0x4000024")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use ScrollWheel instead (UnityUpgradable) -> ScrollWheel", true)]
	scrollWheel = 6,
	[Token(Token = "0x4000025")]
	[Obsolete("Use Repaint instead (UnityUpgradable) -> Repaint", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	repaint = 7,
	[Token(Token = "0x4000026")]
	[Obsolete("Use Layout instead (UnityUpgradable) -> Layout", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	layout = 8,
	[Token(Token = "0x4000027")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use DragUpdated instead (UnityUpgradable) -> DragUpdated", true)]
	dragUpdated = 9,
	[Token(Token = "0x4000028")]
	[Obsolete("Use DragPerform instead (UnityUpgradable) -> DragPerform", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	dragPerform = 10,
	[Token(Token = "0x4000029")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use Ignore instead (UnityUpgradable) -> Ignore", true)]
	ignore = 11,
	[Token(Token = "0x400002A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use Used instead (UnityUpgradable) -> Used", true)]
	used = 12
}
