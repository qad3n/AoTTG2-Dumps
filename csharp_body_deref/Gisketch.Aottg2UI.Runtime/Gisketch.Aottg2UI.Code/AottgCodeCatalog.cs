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

[Token(Token = "0x2000073")]
public sealed class AottgCodeCatalog
{
	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<AottgScreenEntry> _screens;

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<AottgDialogEntry> _dialogs;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<AottgPopoverEntry> _popovers;

	[Token(Token = "0x1700005A")]
	public IReadOnlyList<AottgScreenEntry> Screens
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public IReadOnlyList<AottgDialogEntry> Dialogs
	{
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	public IReadOnlyList<AottgPopoverEntry> Popovers
	{
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public string[] ScreenIds
	{
		[Token(Token = "0x600035A")]
		[Address(RVA = "0x18C2800", Offset = "0x18C0E00", VA = "0x1818C2800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x18C22A0", Offset = "0x18C08A0", VA = "0x1818C22A0")]
	public bool HasScreen(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x18C1F20", Offset = "0x18C0520", VA = "0x1818C1F20")]
	public static AottgCodeCatalog Discover()
	{
		return null;
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x18C1940", Offset = "0x18BFF40", VA = "0x1818C1940")]
	private static AottgCodeCatalog DiscoverFresh()
	{
		return null;
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x18C23F0", Offset = "0x18C09F0", VA = "0x1818C23F0")]
	private void ReadAssembly(Assembly assembly, Dictionary<string, Type> screens, Dictionary<string, Type> dialogs, Dictionary<string, Type> popovers)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x18C1700", Offset = "0x18BFD00", VA = "0x1818C1700")]
	private void AddScreen(Type type, AottgScreenAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x18C1460", Offset = "0x18BFA60", VA = "0x1818C1460")]
	private void AddDialog(Type type, AottgDialogAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x18C15B0", Offset = "0x18BFBB0", VA = "0x1818C15B0")]
	private void AddPopover(Type type, AottgPopoverAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x18C1F30", Offset = "0x18C0530", VA = "0x1818C1F30")]
	private static void GuardDuplicate(string kind, string id, Type type, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x6000363")]
	private static T Attribute<T>(Type type) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x18C26B0", Offset = "0x18C0CB0", VA = "0x1818C26B0")]
	private static Type[] SafeTypes(Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x18C26F0", Offset = "0x18C0CF0", VA = "0x1818C26F0")]
	public AottgCodeCatalog()
	{
	}
}
