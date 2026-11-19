// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.SettingsScreen;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200027A")]
internal static class AottgGameCreateWeatherEditor
{
	[Token(Token = "0x4000CD5")]
	private const string Id = "game-create-weather";

	[Token(Token = "0x4000CD6")]
	private const string HeaderId = "game-create-weather-header";

	[Token(Token = "0x4000CD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<IAottgSettingsStateSync> Rows;

	[Token(Token = "0x4000CD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static WeatherSet _draft;

	[Token(Token = "0x4000CD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static WeatherSet _draftSource;

	[Token(Token = "0x1700018E")]
	private static SetSettingsContainer<WeatherSet> Sets
	{
		[Token(Token = "0x6000F20")]
		[Address(RVA = "0x57A8790", Offset = "0x57A7790", VA = "0x57A8790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x57A87E0", Offset = "0x57A77E0", VA = "0x57A87E0")]
	public static void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x57A9D10", Offset = "0x57A8D10", VA = "0x57A9D10")]
	public static void SaveChanges()
	{
	}

	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x57A9110", Offset = "0x57A8110", VA = "0x57A9110")]
	private static void BuildHeader(AottgUi ui)
	{
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x57A9D60", Offset = "0x57A8D60", VA = "0x57A9D60")]
	private static string PresetNotice(WeatherSet preset)
	{
		return null;
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x57AA0F0", Offset = "0x57A90F0", VA = "0x57AA0F0")]
	private static void RefreshHeader(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x57A9010", Offset = "0x57A8010", VA = "0x57A9010")]
	private static WeatherSet Draft(WeatherSet preset)
	{
		return null;
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x57A9EB0", Offset = "0x57A8EB0", VA = "0x57A9EB0")]
	private static string CopyName(WeatherSet preset)
	{
		return null;
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x57A9F20", Offset = "0x57A8F20", VA = "0x57A9F20")]
	private static WeatherSet ExistingCopy(WeatherSet preset)
	{
		return null;
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x57AA210", Offset = "0x57A9210", VA = "0x57AA210")]
	private static bool PromoteDraft()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x57AA8B0", Offset = "0x57A98B0", VA = "0x57AA8B0")]
	private static void CopyChangedSettings(WeatherSet source, WeatherSet edited, WeatherSet target)
	{
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x57AAEA0", Offset = "0x57A9EA0", VA = "0x57AAEA0")]
	private static void Edited(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000F2C")]
	private static T Track<T>(T row) where T : AottgComponent, IAottgSettingsStateSync
	{
		return null;
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x57AB110", Offset = "0x57AA110", VA = "0x57AB110")]
	public static void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x57A92F0", Offset = "0x57A82F0", VA = "0x57A92F0")]
	private static AottgSettingRow Row(string key, AottgSettingControlKind kind, IAottgSettingAdapter adapter, [Optional] string[] options)
	{
		return null;
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x57A9700", Offset = "0x57A8700", VA = "0x57A9700")]
	private static void Float(AottgUi ui, string key, FloatSetting setting, bool slider = true)
	{
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x57A94F0", Offset = "0x57A84F0", VA = "0x57A94F0")]
	private static void Color(AottgUi ui, string key, ColorSetting setting)
	{
	}

	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x57A97B0", Offset = "0x57A87B0", VA = "0x57A97B0")]
	private static void Vector(AottgUi ui, string key, Vector3Setting setting)
	{
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x57AB320", Offset = "0x57AA320", VA = "0x57AB320")]
	private static void Operate(GisketchUIRoot root, WeatherSet selected, string operation)
	{
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x57ABA20", Offset = "0x57AAA20", VA = "0x57ABA20")]
	private static void ImportSchedule(GisketchUIRoot root, WeatherSet target)
	{
	}

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x57ABBB0", Offset = "0x57AABB0", VA = "0x57ABBB0")]
	internal static bool TryImport(string text, out WeatherSet imported, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x57AC820", Offset = "0x57AB820", VA = "0x57AC820")]
	private static void Save(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x57AB090", Offset = "0x57AA090", VA = "0x57AB090")]
	private static void Refresh(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x57AA070", Offset = "0x57A9070", VA = "0x57AA070")]
	private static string Text(string key)
	{
		return null;
	}
}
