// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FilterFunctionDefinitionUtils
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000255")]
internal static class FilterFunctionDefinitionUtils
{
	[Token(Token = "0x4000883")]
	[FieldOffset(Offset = "0x0")]
	private static FilterFunctionDefinition s_BlurDef;

	[Token(Token = "0x4000884")]
	[FieldOffset(Offset = "0x8")]
	private static FilterFunctionDefinition s_TintDef;

	[Token(Token = "0x4000885")]
	[FieldOffset(Offset = "0x10")]
	private static FilterFunctionDefinition s_OpacityDef;

	[Token(Token = "0x4000886")]
	[FieldOffset(Offset = "0x18")]
	private static FilterFunctionDefinition s_InvertDef;

	[Token(Token = "0x4000887")]
	[FieldOffset(Offset = "0x20")]
	private static FilterFunctionDefinition s_GrayscaleDef;

	[Token(Token = "0x4000888")]
	[FieldOffset(Offset = "0x28")]
	private static FilterFunctionDefinition s_SepiaDef;

	[Token(Token = "0x4000889")]
	[FieldOffset(Offset = "0x30")]
	private static FilterFunctionDefinition s_ContrastDef;

	[Token(Token = "0x400088A")]
	[FieldOffset(Offset = "0x38")]
	private static FilterFunctionDefinition s_HueRotateDef;

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x32625A0", Offset = "0x3260BA0", VA = "0x1832625A0")]
	public static string GetBuiltinFilterName(FilterFunctionType type)
	{
		return null;
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x32620E0", Offset = "0x32606E0", VA = "0x1832620E0")]
	public static FilterFunctionDefinition GetBuiltinDefinition(FilterFunctionType type)
	{
		return null;
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x3261360", Offset = "0x325F960", VA = "0x183261360")]
	private static FilterFunctionDefinition CreateBlurFilterFunctionDefinition()
	{
		return null;
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x3261C20", Offset = "0x3260220", VA = "0x183261C20")]
	private static FilterFunctionDefinition CreateColorEffectFilterFunctionDefinition(FilterFunctionType filterType)
	{
		return null;
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x3261150", Offset = "0x325F750", VA = "0x183261150")]
	private static PostProcessingMargins ComputeHorizontalBlurMargins(FilterFunction func)
	{
		return default(PostProcessingMargins);
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x3261250", Offset = "0x325F850", VA = "0x183261250")]
	private static PostProcessingMargins ComputeVerticalBlurMargins(FilterFunction func)
	{
		return default(PostProcessingMargins);
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x32607F0", Offset = "0x325EDF0", VA = "0x1832607F0")]
	private static void ApplyBlurSettings(MaterialPropertyBlock mpb, FilterPassContext context)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x32608B0", Offset = "0x325EEB0", VA = "0x1832608B0")]
	private static void ApplySettings(MaterialPropertyBlock mpb, FilterPassContext context)
	{
	}
}
