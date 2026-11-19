// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgCodeCatalog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000079")]
public sealed class AottgCodeCatalog
{
	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<AottgScreenEntry> _screens;

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<AottgDialogEntry> _dialogs;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<AottgPopoverEntry> _popovers;

	[Token(Token = "0x1700005A")]
	public IReadOnlyList<AottgScreenEntry> Screens
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x5262060", Offset = "0x5261060", VA = "0x5262060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public IReadOnlyList<AottgDialogEntry> Dialogs
	{
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x5262070", Offset = "0x5261070", VA = "0x5262070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	public IReadOnlyList<AottgPopoverEntry> Popovers
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x5262080", Offset = "0x5261080", VA = "0x5262080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public string[] ScreenIds
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x5262090", Offset = "0x5261090", VA = "0x5262090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x52621A0", Offset = "0x52611A0", VA = "0x52621A0")]
	public bool HasScreen(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x5262320", Offset = "0x5261320", VA = "0x5262320")]
	public static AottgCodeCatalog Discover()
	{
		return null;
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x5262330", Offset = "0x5261330", VA = "0x5262330")]
	private static AottgCodeCatalog DiscoverFresh()
	{
		return null;
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x52629D0", Offset = "0x52619D0", VA = "0x52629D0")]
	private void ReadAssembly(Assembly assembly, Dictionary<string, Type> screens, Dictionary<string, Type> dialogs, Dictionary<string, Type> popovers)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x5262D30", Offset = "0x5261D30", VA = "0x5262D30")]
	private void AddScreen(Type type, AottgScreenAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x5262F20", Offset = "0x5261F20", VA = "0x5262F20")]
	private void AddDialog(Type type, AottgDialogAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x5263060", Offset = "0x5262060", VA = "0x5263060")]
	private void AddPopover(Type type, AottgPopoverAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x52631A0", Offset = "0x52621A0", VA = "0x52631A0")]
	private static void GuardDuplicate(string kind, string id, Type type, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x60003AE")]
	private static T Attribute<T>(Type type) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x5262C80", Offset = "0x5261C80", VA = "0x5262C80")]
	private static Type[] SafeTypes(Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x52628C0", Offset = "0x52618C0", VA = "0x52628C0")]
	public AottgCodeCatalog()
	{
	}
}
