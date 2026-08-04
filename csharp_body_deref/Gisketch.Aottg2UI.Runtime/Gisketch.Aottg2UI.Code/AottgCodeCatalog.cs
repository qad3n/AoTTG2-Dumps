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

[Token(Token = "0x200005F")]
public sealed class AottgCodeCatalog
{
	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<AottgScreenEntry> _screens;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<AottgDialogEntry> _dialogs;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<AottgPopoverEntry> _popovers;

	[Token(Token = "0x1700003B")]
	public IReadOnlyList<AottgScreenEntry> Screens
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x3A5BDA0", Offset = "0x3A5BDA0", VA = "0x3A5BDA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public IReadOnlyList<AottgDialogEntry> Dialogs
	{
		[Token(Token = "0x600027F")]
		[Address(RVA = "0x3A5BDB0", Offset = "0x3A5BDB0", VA = "0x3A5BDB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public IReadOnlyList<AottgPopoverEntry> Popovers
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x3A5BDC0", Offset = "0x3A5BDC0", VA = "0x3A5BDC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public string[] ScreenIds
	{
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x3A5BDD0", Offset = "0x3A5BDD0", VA = "0x3A5BDD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x3A5BED0", Offset = "0x3A5BED0", VA = "0x3A5BED0")]
	public bool HasScreen(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x3A5C060", Offset = "0x3A5C060", VA = "0x3A5C060")]
	public static AottgCodeCatalog Discover()
	{
		return null;
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x3A5C070", Offset = "0x3A5C070", VA = "0x3A5C070")]
	private static AottgCodeCatalog DiscoverFresh()
	{
		return null;
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x3A5C700", Offset = "0x3A5C700", VA = "0x3A5C700")]
	private void ReadAssembly(Assembly assembly, Dictionary<string, Type> screens, Dictionary<string, Type> dialogs, Dictionary<string, Type> popovers)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x3A5CA70", Offset = "0x3A5CA70", VA = "0x3A5CA70")]
	private void AddScreen(Type type, AottgScreenAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x3A5CC00", Offset = "0x3A5CC00", VA = "0x3A5CC00")]
	private void AddDialog(Type type, AottgDialogAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x3A5CD40", Offset = "0x3A5CD40", VA = "0x3A5CD40")]
	private void AddPopover(Type type, AottgPopoverAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x3A5CE80", Offset = "0x3A5CE80", VA = "0x3A5CE80")]
	private static void GuardDuplicate(string kind, string id, Type type, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x600028A")]
	private static T Attribute<T>(Type type) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x3A5C9C0", Offset = "0x3A5C9C0", VA = "0x3A5C9C0")]
	private static Type[] SafeTypes(Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x3A5C5F0", Offset = "0x3A5C5F0", VA = "0x3A5C5F0")]
	public AottgCodeCatalog()
	{
	}
}
