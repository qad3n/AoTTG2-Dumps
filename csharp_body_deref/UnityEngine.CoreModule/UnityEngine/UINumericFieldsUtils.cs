// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UINumericFieldsUtils
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20001E0")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
internal static class UINumericFieldsUtils
{
	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string k_AllowedCharactersForFloat;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string k_AllowedCharactersForFloat_NoExpressions;

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string k_AllowedCharactersForInt;

	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string k_AllowedCharactersForInt_NoExpressions;

	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string k_AllowedCharactersForUInt_NoExpressions;

	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string k_DoubleFieldFormatString;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string k_FloatFieldFormatString;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string k_IntFieldFormatString;

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x2F5CA40", Offset = "0x2F5B040", VA = "0x182F5CA40")]
	public static bool TryConvertStringToDouble(string str, out double value, out ExpressionEvaluator.Expression expr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x2F5CBD0", Offset = "0x2F5B1D0", VA = "0x182F5CBD0")]
	public static bool TryConvertStringToDouble(string str, string initialValueAsString, out double value, out ExpressionEvaluator.Expression expression)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x2F5CCE0", Offset = "0x2F5B2E0", VA = "0x182F5CCE0")]
	public static bool TryConvertStringToFloat(string str, string initialValueAsString, out float value, out ExpressionEvaluator.Expression expression)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x2F5D030", Offset = "0x2F5B630", VA = "0x182F5D030")]
	public static bool TryConvertStringToLong(string str, out long value, out ExpressionEvaluator.Expression expr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x2F5CEE0", Offset = "0x2F5B4E0", VA = "0x182F5CEE0")]
	public static bool TryConvertStringToLong(string str, string initialValueAsString, out long value, out ExpressionEvaluator.Expression expression)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x2F5D140", Offset = "0x2F5B740", VA = "0x182F5D140")]
	public static bool TryConvertStringToULong(string str, out ulong value, out ExpressionEvaluator.Expression expr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x2F5D1C0", Offset = "0x2F5B7C0", VA = "0x182F5D1C0")]
	public static bool TryConvertStringToULong(string str, string initialValueAsString, out ulong value, out ExpressionEvaluator.Expression expression)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x2F5CE50", Offset = "0x2F5B450", VA = "0x182F5CE50")]
	public static bool TryConvertStringToInt(string str, string initialValueAsString, out int value, out ExpressionEvaluator.Expression expression)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x2F5D0B0", Offset = "0x2F5B6B0", VA = "0x182F5D0B0")]
	public static bool TryConvertStringToUInt(string str, string initialValueAsString, out uint value, out ExpressionEvaluator.Expression expression)
	{
		return default(bool);
	}
}
