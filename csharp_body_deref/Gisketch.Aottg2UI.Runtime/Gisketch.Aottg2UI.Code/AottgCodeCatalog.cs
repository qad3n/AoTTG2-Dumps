using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200005D")]
public sealed class AottgCodeCatalog
{
	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<AottgScreenEntry> _screens;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<AottgDialogEntry> _dialogs;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<AottgPopoverEntry> _popovers;

	[Token(Token = "0x1700003A")]
	public IReadOnlyList<AottgScreenEntry> Screens
	{
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x39F1020", Offset = "0x39F1020", VA = "0x39F1020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public IReadOnlyList<AottgDialogEntry> Dialogs
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x39F1030", Offset = "0x39F1030", VA = "0x39F1030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public IReadOnlyList<AottgPopoverEntry> Popovers
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x39F1040", Offset = "0x39F1040", VA = "0x39F1040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public string[] ScreenIds
	{
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x39F1050", Offset = "0x39F1050", VA = "0x39F1050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x39F1150", Offset = "0x39F1150", VA = "0x39F1150")]
	public bool HasScreen(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x39F12E0", Offset = "0x39F12E0", VA = "0x39F12E0")]
	public static AottgCodeCatalog Discover()
	{
		return null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x39F12F0", Offset = "0x39F12F0", VA = "0x39F12F0")]
	private static AottgCodeCatalog DiscoverFresh()
	{
		return null;
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x39F1980", Offset = "0x39F1980", VA = "0x39F1980")]
	private void ReadAssembly(Assembly assembly, Dictionary<string, Type> screens, Dictionary<string, Type> dialogs, Dictionary<string, Type> popovers)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x39F1CF0", Offset = "0x39F1CF0", VA = "0x39F1CF0")]
	private void AddScreen(Type type, AottgScreenAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x39F1E80", Offset = "0x39F1E80", VA = "0x39F1E80")]
	private void AddDialog(Type type, AottgDialogAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x39F1FC0", Offset = "0x39F1FC0", VA = "0x39F1FC0")]
	private void AddPopover(Type type, AottgPopoverAttribute attribute, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x39F2100", Offset = "0x39F2100", VA = "0x39F2100")]
	private static void GuardDuplicate(string kind, string id, Type type, Dictionary<string, Type> seen)
	{
	}

	[Token(Token = "0x600027B")]
	private static T Attribute<T>(Type type) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x39F1C40", Offset = "0x39F1C40", VA = "0x39F1C40")]
	private static Type[] SafeTypes(Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x39F1870", Offset = "0x39F1870", VA = "0x39F1870")]
	public AottgCodeCatalog()
	{
	}
}
