// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.SettingsScreen;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000256")]
internal static class AottgGameCreateWeatherEditor
{
	[Token(Token = "0x4000C2E")]
	private const string Id = "game-create-weather";

	[Token(Token = "0x4000C2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<IAottgSettingsStateSync> Rows;

	[Token(Token = "0x17000183")]
	private static SetSettingsContainer<WeatherSet> Sets
	{
		[Token(Token = "0x6000E1F")]
		[Address(RVA = "0x1DDD2A0", Offset = "0x1DDB8A0", VA = "0x181DDD2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x1DDA470", Offset = "0x1DD8A70", VA = "0x181DDA470")]
	public static void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000E21")]
	private static T Track<T>(T row) where T : AottgComponent, IAottgSettingsStateSync
	{
		return null;
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x1DDC210", Offset = "0x1DDA810", VA = "0x181DDC210")]
	public static void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x1DDC010", Offset = "0x1DDA610", VA = "0x181DDC010")]
	private static AottgSettingRow Row(string key, string label, AottgSettingControlKind kind, IAottgSettingAdapter adapter, bool editable, [Optional] string[] options)
	{
		return null;
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x1DDB630", Offset = "0x1DD9C30", VA = "0x181DDB630")]
	private static void Float(AottgUi ui, string key, string label, FloatSetting setting, bool editable, bool slider = true)
	{
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x1DDB4A0", Offset = "0x1DD9AA0", VA = "0x181DDB4A0")]
	private static void Color(AottgUi ui, string key, string label, ColorSetting setting, bool editable)
	{
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x1DDCCD0", Offset = "0x1DDB2D0", VA = "0x181DDCCD0")]
	private static void Vector(AottgUi ui, string key, string label, Vector3Setting setting, bool editable)
	{
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x1DDB8C0", Offset = "0x1DD9EC0", VA = "0x181DDB8C0")]
	private static void Operate(GisketchUIRoot root, WeatherSet selected, string operation)
	{
	}

	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x1DDB700", Offset = "0x1DD9D00", VA = "0x181DDB700")]
	private static void ImportSchedule(GisketchUIRoot root, WeatherSet selected)
	{
	}

	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x1DDC450", Offset = "0x1DDAA50", VA = "0x181DDC450")]
	internal static bool TryImport(string text, out WeatherSet imported, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x1DDC180", Offset = "0x1DDA780", VA = "0x181DDC180")]
	private static void Save(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x1DDBF90", Offset = "0x1DDA590", VA = "0x181DDBF90")]
	private static void Refresh(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x1DDC3F0", Offset = "0x1DDA9F0", VA = "0x181DDC3F0")]
	private static string Text(string key, string fallback)
	{
		return null;
	}
}
