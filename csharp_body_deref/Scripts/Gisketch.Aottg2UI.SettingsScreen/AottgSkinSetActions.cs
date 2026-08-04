// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200012E")]
internal static class AottgSkinSetActions
{
	[Token(Token = "0x200012F")]
	internal enum Operation
	{
		[Token(Token = "0x40006EE")]
		Create,
		[Token(Token = "0x40006EF")]
		Rename,
		[Token(Token = "0x40006F0")]
		Copy
	}

	[Token(Token = "0x40006EB")]
	[FieldOffset(Offset = "0x0")]
	private static ISetSettingsContainer _settings;

	[Token(Token = "0x40006EC")]
	[FieldOffset(Offset = "0x8")]
	private static Operation _operation;

	[Token(Token = "0x170000EF")]
	internal static ISetSettingsContainer CurrentSettings
	{
		[Token(Token = "0x600064A")]
		[Address(RVA = "0x4364E70", Offset = "0x4364E70", VA = "0x4364E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F0")]
	internal static Operation CurrentOperation
	{
		[Token(Token = "0x600064B")]
		[Address(RVA = "0x4364EB0", Offset = "0x4364EB0", VA = "0x4364EB0")]
		get
		{
			return default(Operation);
		}
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x4364EF0", Offset = "0x4364EF0", VA = "0x4364EF0")]
	public static void OpenCreate(GisketchActionContext context, ISetSettingsContainer settings)
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4364FE0", Offset = "0x4364FE0", VA = "0x4364FE0")]
	public static void OpenRename(GisketchActionContext context, ISetSettingsContainer settings)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x4365090", Offset = "0x4365090", VA = "0x4365090")]
	public static void OpenCopy(GisketchActionContext context, ISetSettingsContainer settings)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x43650A0", Offset = "0x43650A0", VA = "0x43650A0")]
	public static void OpenDelete(GisketchActionContext context, ISetSettingsContainer settings)
	{
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x43651E0", Offset = "0x43651E0", VA = "0x43651E0")]
	internal static string SelectedName()
	{
		return null;
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x4365360", Offset = "0x4365360", VA = "0x4365360")]
	internal static void ApplyName(string name)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x4365960", Offset = "0x4365960", VA = "0x4365960")]
	internal static void DeleteSelected()
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x4364F00", Offset = "0x4364F00", VA = "0x4364F00")]
	private static void OpenName(GisketchActionContext context, ISetSettingsContainer settings, Operation operation)
	{
	}
}
