// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchThemeDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchThemeDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200006E")]
public sealed class GisketchThemeDefinition
{
	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x18")]
	public string mode;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x20")]
	public GisketchColorToken[] colors;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x28")]
	public GisketchThemePalette[] palettes;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x30")]
	public GisketchStyleDefinition[] styles;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x38")]
	public GisketchMotionToken[] motions;

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x5261150", Offset = "0x5260150", VA = "0x5261150")]
	public static GisketchThemeDefinition FromJson(string json)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchThemeDefinition.c (Gisketch.Aottg2UI.Data.GisketchThemeDefinition$$FromJson): 5 lines keep C-only constructs
		GisketchThemeDefinition pGVar1;
		Il2CppClass klass;
		ArgumentException __this;
		String message;
		MethodInfo lastManagedFrame;

		pGVar1 = JsonConvert.DeserializeObject<GisketchThemeDefinition>(json);
		if (pGVar1 == null) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Invalid Gisketch theme JSON.");
			__this = new ArgumentException(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Data_GisketchThemeDefinition_FromJson);
			throw (object)__this;
		}
		return pGVar1;
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x5261200", Offset = "0x5260200", VA = "0x5261200")]
	public GisketchThemeDefinition()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchThemeDefinition.c (Gisketch.Aottg2UI.Data.GisketchThemeDefinition$$.ctor): clean
		base();
		return;
	}
}
