// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocale.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Localization;

[Token(Token = "0x200005A")]
public static class Aottg2GisketchLocale
{
	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly IGisketchLocalizer Localizer;

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x5259CC0", Offset = "0x5258CC0", VA = "0x5259CC0")]
	public static string Text(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocale.c (Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$Text): clean
		uint uVar1;
		object obj;
		ulong uVar2;
		VirtualInvokeData pVVar5;
		String pSVar6;

		if (Il2CppMethodInitialized_075429a5 == false) {
			Il2CppMethodInitialized_075429a5 = true;
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			obj = (object)Aottg2GisketchLocale.Localizer;
		}
		else {
			obj = *(object*)(typeof(Aottg2GisketchLocale)).static_fields;
		}
		if (obj == null) {
			throw new NullReferenceException();
		}
		uVar2 = **(ulong*)(g_data_07556758 + 0xb8);
		pSVar6 = (String)obj.GetText(key, uVar2, pVVar5.method);
		return pSVar6;
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x525FF30", Offset = "0x525EF30", VA = "0x525FF30")]
	public static string Text(string key, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocale.c (Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$Text): clean
		uint uVar1;
		object obj;
		VirtualInvokeData pVVar4;
		String pSVar5;

		if (Il2CppMethodInitialized_075429a6 == false) {
			Il2CppMethodInitialized_075429a6 = true;
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			obj = (object)Aottg2GisketchLocale.Localizer;
		}
		else {
			obj = *(object*)(typeof(Aottg2GisketchLocale)).static_fields;
		}
		if (obj == null) {
			throw new NullReferenceException();
		}
		pSVar5 = (String)obj.GetText(key, fallback, pVVar4.method);
		return pSVar5;
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x5260040", Offset = "0x525F040", VA = "0x5260040")]
	public static GisketchNodeDefinition Key(GisketchNodeDefinition node, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocale.c (Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$Key): clean
		if (node != null) {
			node.textKey = key;
		}
		return node;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocale.c.

	// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$.cctor: clean
	static Aottg2GisketchLocale()
	{
		object __this;

		__this = new Aottg2GisketchLocalizer();
		Aottg2GisketchLocale.Localizer =(IGisketchLocalizer)__this;
		return;
	}
}
