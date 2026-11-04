// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyMarkerRuntime
// Update status: NEW in this game update
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

[Token(Token = "0x200017B")]
internal sealed class AottgSettingsDirtyMarkerRuntime : MonoBehaviour
{
	[Token(Token = "0x400085D")]
	public const string NodeType = "AottgSettingsDirtyMarker";

	[Token(Token = "0x400085E")]
	private const float StripWidth = 3f;

	[Token(Token = "0x400085F")]
	private const float StripX = -6f;

	[Token(Token = "0x4000860")]
	private const float DotSize = 7f;

	[Token(Token = "0x4000861")]
	private const float DotX = 10f;

	[Token(Token = "0x4000862")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4000863")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _strip;

	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _dot;

	[Token(Token = "0x4000865")]
	[FieldOffset(Offset = "0x38")]
	private CanvasGroup _group;

	[Token(Token = "0x4000866")]
	[FieldOffset(Offset = "0x40")]
	private GisketchUIState _state;

	[Token(Token = "0x4000867")]
	[FieldOffset(Offset = "0x48")]
	private string _stateKey;

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x2314F60", Offset = "0x2313560", VA = "0x182314F60")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x2314650", Offset = "0x2312C50", VA = "0x182314650")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x2315120", Offset = "0x2313720", VA = "0x182315120")]
	private void Setup(GisketchTheme theme, GisketchUIState state, string stateKey)
	{
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x2314DE0", Offset = "0x23133E0", VA = "0x182314DE0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x2314E70", Offset = "0x2313470", VA = "0x182314E70")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x2314EB0", Offset = "0x23134B0", VA = "0x182314EB0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x23149E0", Offset = "0x2312FE0", VA = "0x1823149E0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x2315020", Offset = "0x2313620", VA = "0x182315020")]
	private RectTransform RowRect()
	{
		return null;
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x23146F0", Offset = "0x2312CF0", VA = "0x1823146F0")]
	private RectTransform CreateImage(string name, Color color)
	{
		return null;
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x23150D0", Offset = "0x23136D0", VA = "0x1823150D0")]
	private static void SetRect(RectTransform rect, float width, float height, float x, float y)
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgSettingsDirtyMarkerRuntime()
	{
	}
}
