// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001A0")]
internal static class AottgSkinSetActions
{
	[Token(Token = "0x20001A1")]
	internal enum Operation
	{
		[Token(Token = "0x40008CC")]
		Create,
		[Token(Token = "0x40008CD")]
		Rename,
		[Token(Token = "0x40008CE")]
		Copy
	}

	[Token(Token = "0x40008C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ISetSettingsContainer _settings;

	[Token(Token = "0x40008C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Operation _operation;

	[Token(Token = "0x40008CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Action _afterChange;

	[Token(Token = "0x17000116")]
	internal static ISetSettingsContainer CurrentSettings
	{
		[Token(Token = "0x60008DE")]
		[Address(RVA = "0x239E6F0", Offset = "0x239CCF0", VA = "0x18239E6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000117")]
	internal static Operation CurrentOperation
	{
		[Token(Token = "0x60008DF")]
		[Address(RVA = "0x239E6B0", Offset = "0x239CCB0", VA = "0x18239E6B0")]
		get
		{
			return default(Operation);
		}
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x239E2F0", Offset = "0x239C8F0", VA = "0x18239E2F0")]
	public static void OpenCreate(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x239E550", Offset = "0x239CB50", VA = "0x18239E550")]
	public static void OpenRename(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x239E2B0", Offset = "0x239C8B0", VA = "0x18239E2B0")]
	public static void OpenCopy(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x239E330", Offset = "0x239C930", VA = "0x18239E330")]
	public static void OpenDelete(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x239E5F0", Offset = "0x239CBF0", VA = "0x18239E5F0")]
	internal static string SelectedName()
	{
		return null;
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x239DED0", Offset = "0x239C4D0", VA = "0x18239DED0")]
	internal static void ApplyName(string name)
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x239E140", Offset = "0x239C740", VA = "0x18239E140")]
	internal static void DeleteSelected()
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x239E450", Offset = "0x239CA50", VA = "0x18239E450")]
	private static void OpenName(GisketchActionContext context, ISetSettingsContainer settings, Operation operation, Action afterChange)
	{
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x239E230", Offset = "0x239C830", VA = "0x18239E230")]
	private static void InvokeAfterChange()
	{
	}
}
