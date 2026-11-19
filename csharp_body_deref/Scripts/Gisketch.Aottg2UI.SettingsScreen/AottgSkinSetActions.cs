// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20001AF")]
internal static class AottgSkinSetActions
{
	[Token(Token = "0x20001B0")]
	internal enum Operation
	{
		[Token(Token = "0x4000928")]
		Create,
		[Token(Token = "0x4000929")]
		Rename,
		[Token(Token = "0x400092A")]
		Copy
	}

	[Token(Token = "0x4000924")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ISetSettingsContainer _settings;

	[Token(Token = "0x4000925")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Operation _operation;

	[Token(Token = "0x4000926")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Action _afterChange;

	[Token(Token = "0x17000119")]
	internal static ISetSettingsContainer CurrentSettings
	{
		[Token(Token = "0x6000972")]
		[Address(RVA = "0x5D55800", Offset = "0x5D54800", VA = "0x5D55800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	internal static Operation CurrentOperation
	{
		[Token(Token = "0x6000973")]
		[Address(RVA = "0x5D55840", Offset = "0x5D54840", VA = "0x5D55840")]
		get
		{
			return default(Operation);
		}
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x5D51520", Offset = "0x5D50520", VA = "0x5D51520")]
	public static void OpenCreate(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x5D517D0", Offset = "0x5D507D0", VA = "0x5D517D0")]
	public static void OpenRename(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x5D518E0", Offset = "0x5D508E0", VA = "0x5D518E0")]
	public static void OpenCopy(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x5D51570", Offset = "0x5D50570", VA = "0x5D51570")]
	public static void OpenDelete(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x5D55970", Offset = "0x5D54970", VA = "0x5D55970")]
	internal static string SelectedName()
	{
		return null;
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x5D55AF0", Offset = "0x5D54AF0", VA = "0x5D55AF0")]
	internal static void ApplyName(string name)
	{
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x5D561C0", Offset = "0x5D551C0", VA = "0x5D561C0")]
	internal static void DeleteSelected()
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x5D55880", Offset = "0x5D54880", VA = "0x5D55880")]
	private static void OpenName(GisketchActionContext context, ISetSettingsContainer settings, Operation operation, Action afterChange)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x5D56160", Offset = "0x5D55160", VA = "0x5D56160")]
	private static void InvokeAfterChange()
	{
	}
}
