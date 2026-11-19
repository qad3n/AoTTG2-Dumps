// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchInputCapture
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000EA")]
public static class GisketchInputCapture
{
	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x0")]
	private static int _nextToken;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x4")]
	private static int _activeToken;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x8")]
	private static int _blockedFrame;

	[Token(Token = "0x170000B2")]
	public static bool IsActive
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x52A4160", Offset = "0x52A3160", VA = "0x52A4160")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c (Gisketch.Aottg2UI.Actions.GisketchInputCapture$$get_IsActive): clean
			return GisketchInputCapture._activeToken != 0;
		}
	}

	[Token(Token = "0x170000B3")]
	public static bool BlocksUiInput
	{
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x52981F0", Offset = "0x52971F0", VA = "0x52981F0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c (Gisketch.Aottg2UI.Actions.GisketchInputCapture$$get_BlocksUiInput): clean
			uint uVar1;
			int iVar2;
			int iVar3;
			Gisketch_Aottg2UI_Actions_GisketchInputCapture_StaticFields pGVar4;

			if (Il2CppMethodInitialized_07542bc9 == false) {
				Il2CppMethodInitialized_07542bc9 = true;
				uVar1 = (typeof(GisketchInputCapture)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(GisketchInputCapture)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_07542bc8 == false) {
				Il2CppMethodInitialized_07542bc8 = true;
				uVar1 = (typeof(GisketchInputCapture)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(GisketchInputCapture))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pGVar4 = typeof(GisketchInputCapture).static_fields;
				iVar2 = pGVar4._activeToken;
			}
			else {
				pGVar4 = (typeof(GisketchInputCapture)).static_fields;
				iVar2 = pGVar4._activeToken;
			}
			if (iVar2 != 0) {
				return true;
			}
			if (((typeof(GisketchInputCapture))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(GisketchInputCapture).static_fields;
			}
			iVar2 = pGVar4._blockedFrame;
			iVar3 = Time.frameCount;
			return iVar2 == iVar3;
		}
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x52982D0", Offset = "0x52972D0", VA = "0x52982D0")]
	public static void BlockThisFrame()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c (Gisketch.Aottg2UI.Actions.GisketchInputCapture$$BlockThisFrame): clean
		int iVar1;

		iVar1 = Time.frameCount;
		GisketchInputCapture._blockedFrame = iVar1;
		return;
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x52A41B0", Offset = "0x52A31B0", VA = "0x52A41B0")]
	public static int Begin()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c (Gisketch.Aottg2UI.Actions.GisketchInputCapture$$Begin): clean
		Gisketch_Aottg2UI_Actions_GisketchInputCapture_StaticFields pGVar1;
		int iVar2;
		int iVar3;

		pGVar1 = typeof(GisketchInputCapture).static_fields;
		iVar3 = pGVar1._nextToken + 1;
		pGVar1._nextToken = iVar3;
		pGVar1._activeToken = iVar3;
		iVar2 = Time.frameCount;
		pGVar1 = typeof(GisketchInputCapture).static_fields;
		pGVar1._blockedFrame = iVar2;
		return pGVar1._activeToken;
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x52A4220", Offset = "0x52A3220", VA = "0x52A4220")]
	public static void End(int token)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c (Gisketch.Aottg2UI.Actions.GisketchInputCapture$$End): clean
		int iVar1;
		int iVar2;
		Gisketch_Aottg2UI_Actions_GisketchInputCapture_StaticFields pGVar3;

		if (token != 0) {
			if ((typeof(GisketchInputCapture)._2).cctor_finished_or_no_cctor == 0) {
				pGVar3 = typeof(GisketchInputCapture).static_fields;
				iVar1 = pGVar3._activeToken;
			}
			else {
				pGVar3 = typeof(GisketchInputCapture).static_fields;
				iVar1 = pGVar3._activeToken;
			}
			if (iVar1 == token) {
				if (((typeof(GisketchInputCapture))._2). cctor_finished_or_no_cctor == 0) {
					pGVar3 = typeof(GisketchInputCapture).static_fields;
				}
				pGVar3._activeToken = 0;
				iVar2 = Time.frameCount;
				GisketchInputCapture._blockedFrame = iVar2;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x52A42C0", Offset = "0x52A32C0", VA = "0x52A42C0")]
	public static void ForceEnd()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c (Gisketch.Aottg2UI.Actions.GisketchInputCapture$$ForceEnd): clean
		int iVar1;

		GisketchInputCapture._activeToken = 0;
		iVar1 = Time.frameCount;
		GisketchInputCapture._blockedFrame = iVar1;
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c.

	// Gisketch.Aottg2UI.Actions.GisketchInputCapture$$.cctor: clean
	static GisketchInputCapture()
	{
		GisketchInputCapture._blockedFrame = -1;
		return;
	}
}
