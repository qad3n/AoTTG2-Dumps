// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMenuStatusLabel
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMenuStatusLabel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B3")]
internal sealed class AottgMenuStatusLabel : AottgComponent
{
	[Token(Token = "0x4000DCB")]
	private const string TextKey = "menu.status.text";

	[Token(Token = "0x4000DCC")]
	private const string VisibleKey = "menu.status.visible";

	[Token(Token = "0x4000DCD")]
	private const float RefreshSeconds = 0.25f;

	[Token(Token = "0x4000DCE")]
	private const float Padding = 20f;

	[Token(Token = "0x4000DCF")]
	[FieldOffset(Offset = "0x0")]
	private static float _nextRefreshTime;

	[Token(Token = "0x4000DD0")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000DD1")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _style;

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x57C1B10", Offset = "0x57C0B10", VA = "0x57C1B10")]
	public AottgMenuStatusLabel(string id, string style = "menuStatusText")
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMenuStatusLabel.c (Gisketch.Aottg2UI.Game.AottgMenuStatusLabel$$.ctor): clean
		base();
		this._id = id;
		this._style = style;
		return;
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x57C29A0", Offset = "0x57C19A0", VA = "0x57C29A0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMenuStatusLabel.c (Gisketch.Aottg2UI.Game.AottgMenuStatusLabel$$Build): 1 lines keep C-only constructs
		Action<AottgUi> __this_00;
		String id;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_Build_b__8_0);
		id = String.Concat(this._id, "-layer");
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", "Absolute", null, 0.0, width, null, null, null, null, null, 20.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("clear", __this_00, id, layout, null);
		return;
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x57C2B30", Offset = "0x57C1B30", VA = "0x57C2B30")]
	public static void Refresh(GisketchUIState state)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMenuStatusLabel.c (Gisketch.Aottg2UI.Game.AottgMenuStatusLabel$$Refresh): clean
		String value;
		float fVar1;

		if (state != null) {
			fVar1 = Time.unscaledTime;
			if (AottgMenuStatusLabel._nextRefreshTime <= fVar1) {
				fVar1 = Time.unscaledTime;
				AottgMenuStatusLabel._nextRefreshTime = fVar1 + 0.25;
				value = AottgMenuStatusLabel.StatusText();
				state.Set("menu.status.text", value);
				if (value == null) {
					throw new NullReferenceException();
				}
				state.SetBool("menu.status.visible", 0 < value._stringLength);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x57C2C10", Offset = "0x57C1C10", VA = "0x57C2C10")]
	private static string StatusText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMenuStatusLabel.c (Gisketch.Aottg2UI.Game.AottgMenuStatusLabel$$StatusText): 1 lines keep C-only constructs
		uint uVar1;
		GraphicsSettings pSVar2;
		BoolSetting pSVar3;
		bool bVar4;
		String pSVar5;
		String str0;
		String str2;
		int local_34;
		Enum local_30;

		local_34 = 0;
		pSVar2 = SettingsManager.GraphicsSettings;
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.ShowFPS, pSVar3 == null)) goto label_058c2e97;
		if (pSVar3._value == false) {
			pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_075454e5 == false) goto label_058c2e67;
	label_058c2cfe: ;
				uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_075454e5 != false) goto label_058c2cfe;
	label_058c2e67: ;
				g_data_075454e5 = true;
				uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			local_34 = UIManager._lastFPS;
			pSVar5 = local_34.ToString();
			pSVar5 = String.Concat("FPS:", pSVar5);
		}
		bVar4 = AottgGisketchUiHost.IsScreenActive("server-select");
		if (!bVar4) {
			bVar4 = AottgGisketchUiHost.IsScreenActive("room-list");
			str0 = pSVar5;
			if (!bVar4) goto label_058c2e48;
		}
		local_30.klass = (Enum)typeof(ClientState);
		local_30.monitor = (IntPtr)0xffffffffffffffff;
		str0 = local_30.ToString();
		bVar4 = PhotonNetwork.IsConnected;
		if (bVar4) {
			local_34 = PhotonNetwork.GetPing();
			str2 = local_34.ToString();
			str0 = String.Concat(str0, " Ping:", str2);
		}
		if (pSVar5 == null) {
	label_058c2e97: ;
			throw new NullReferenceException();
		}
		if (0 < pSVar5._stringLength) {
			str0 = String.Concat(pSVar5, "\n", str0);
		}
	label_058c2e48: ;
		return str0;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMenuStatusLabel.c.

	// Gisketch.Aottg2UI.Game.AottgMenuStatusLabel$$<Build>b__8_0: clean
	private void Build_b__8_0(AottgUi layer)
	{
		GisketchUIBindingDefinition pGVar1;
		GisketchNodeDefinition pGVar2;

		if (layer != null) {
			pGVar2 = layer.Text((String)**(ulong*)(g_data_07556758 + 0xb8), this._style, this._id, "menu.status.text", null);
			if ((pGVar2 != null) &&(pGVar1 = pGVar2.bind, pGVar1 != null) ) {
				pGVar1.visible = "menu.status.visible";
				return;
			}
		}
		throw new NullReferenceException();
	}
}
