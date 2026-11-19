// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000160")]
internal sealed class AottgKeybindCaptureRuntime : MonoBehaviour
{
	[Token(Token = "0x4000822")]
	public const string NodeType = "AottgKeybindCaptureRuntime";

	[Token(Token = "0x4000823")]
	[FieldOffset(Offset = "0x20")]
	private int _token;

	[Token(Token = "0x4000824")]
	[FieldOffset(Offset = "0x24")]
	private int _skipFrames;

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x5CBE970", Offset = "0x5CBD970", VA = "0x5CBE970")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$RegisterFactory): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07548177 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07548177 = true;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_Build);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgKeybindCaptureRuntime", __this_00);
		return;
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x5CBF670", Offset = "0x5CBE670", VA = "0x5CBF670")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Build): 4 lines keep C-only constructs
		uint in_EAX;
		AottgKeybindCaptureRuntime pGVar1;
		String s;
		ulong uStack_18;

		uStack_18._0_4_ = in_EAX;
		uStack_18 = (ulong)(uint)uStack_18;
		if (node == null) {
			s = null;
		}
		else {
			s = node.value;
		}
		Int32.TryParse(s, (int)((long)&uStack_18 + 4));
		if (go != null) {
			pGVar1 = go.AddComponent<AottgKeybindCaptureRuntime>();
			if (pGVar1 != null) {
				pGVar1._token = uStack_18._4_4_;
				return true;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x5CBF6F0", Offset = "0x5CBE6F0", VA = "0x5CBF6F0")]
	private void Setup(int token)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Setup): clean
		this._token = token;
		return;
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x5CBF700", Offset = "0x5CBE700", VA = "0x5CBF700")]
	private void Update()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Update): clean
		int iVar1;
		GameObject source;

		iVar1 = this._skipFrames;
		if (iVar1 < 1) {
			source = this.gameObject;
			AottgKeybindCaptureDialog.CaptureNext(source);
			return;
		}
		this._skipFrames = iVar1 + -1;
		return;
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x5CBF720", Offset = "0x5CBE720", VA = "0x5CBF720")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$OnDestroy): clean
		int token;

		token = this._token;
		GisketchInputCapture.End(token);
		if (AottgKeybindCaptureDialog._captureToken == token) {
			AottgKeybindCaptureDialog._captureToken = 0;
		}
		return;
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x5CBF790", Offset = "0x5CBE790", VA = "0x5CBF790")]
	public AottgKeybindCaptureRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$.ctor): clean
		this._skipFrames = 2;
		base();
		return;
	}
}
