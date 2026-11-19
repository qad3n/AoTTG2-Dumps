// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDirtyMarkerRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000183")]
internal sealed class AottgSettingsDirtyMarkerRuntime : MonoBehaviour
{
	[Token(Token = "0x40008A6")]
	public const string NodeType = "AottgSettingsDirtyMarker";

	[Token(Token = "0x40008A7")]
	private const float StripWidth = 3f;

	[Token(Token = "0x40008A8")]
	private const float StripX = -6f;

	[Token(Token = "0x40008A9")]
	private const float DotSize = 7f;

	[Token(Token = "0x40008AA")]
	private const float DotX = 10f;

	[Token(Token = "0x40008AB")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x40008AC")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _strip;

	[Token(Token = "0x40008AD")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _dot;

	[Token(Token = "0x40008AE")]
	[FieldOffset(Offset = "0x38")]
	private CanvasGroup _group;

	[Token(Token = "0x40008AF")]
	[FieldOffset(Offset = "0x40")]
	private GisketchUIState _state;

	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x48")]
	private string _stateKey;

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x5D3B440", Offset = "0x5D3A440", VA = "0x5D3B440")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x5D3B500", Offset = "0x5D3A500", VA = "0x5D3B500")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x5D3B590", Offset = "0x5D3A590", VA = "0x5D3B590")]
	private void Setup(GisketchTheme theme, GisketchUIState state, string stateKey)
	{
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x5D3BB90", Offset = "0x5D3AB90", VA = "0x5D3BB90")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x5D3BC10", Offset = "0x5D3AC10", VA = "0x5D3BC10")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x5D3BAF0", Offset = "0x5D3AAF0", VA = "0x5D3BAF0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x5D3BC40", Offset = "0x5D3AC40", VA = "0x5D3BC40")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x5D3BEF0", Offset = "0x5D3AEF0", VA = "0x5D3BEF0")]
	private RectTransform RowRect()
	{
		return null;
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x5D3B820", Offset = "0x5D3A820", VA = "0x5D3B820")]
	private RectTransform CreateImage(string name, Color color)
	{
		return null;
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x5D3BFA0", Offset = "0x5D3AFA0", VA = "0x5D3BFA0")]
	private static void SetRect(RectTransform rect, float width, float height, float x, float y)
	{
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x5D3BFE0", Offset = "0x5D3AFE0", VA = "0x5D3BFE0")]
	public AottgSettingsDirtyMarkerRuntime()
	{
	}
}
