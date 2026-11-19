// ==================== AoTTG2 cross-reference ====================
// Type: System.DefaultBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Reflection;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200015D")]
internal class DefaultBinder : Binder
{
	[Token(Token = "0x200015E")]
	internal class BinderState
	{
		[Token(Token = "0x40004E7")]
		[FieldOffset(Offset = "0x10")]
		internal int[] m_argsMap;

		[Token(Token = "0x40004E8")]
		[FieldOffset(Offset = "0x18")]
		internal int m_originalSize;

		[Token(Token = "0x40004E9")]
		[FieldOffset(Offset = "0x1C")]
		internal bool m_isParamArray;

		[Token(Token = "0x6000DEB")]
		[Address(RVA = "0x54F1C20", Offset = "0x54F0C20", VA = "0x54F1C20")]
		internal BinderState(int[] argsMap, int originalSize, bool isParamArray)
		{
		}
	}

	[Token(Token = "0x200015F")]
	[Flags]
	private enum Primitives
	{
		[Token(Token = "0x40004EB")]
		Boolean = 8,
		[Token(Token = "0x40004EC")]
		Char = 0x10,
		[Token(Token = "0x40004ED")]
		SByte = 0x20,
		[Token(Token = "0x40004EE")]
		Byte = 0x40,
		[Token(Token = "0x40004EF")]
		Int16 = 0x80,
		[Token(Token = "0x40004F0")]
		UInt16 = 0x100,
		[Token(Token = "0x40004F1")]
		Int32 = 0x200,
		[Token(Token = "0x40004F2")]
		UInt32 = 0x400,
		[Token(Token = "0x40004F3")]
		Int64 = 0x800,
		[Token(Token = "0x40004F4")]
		UInt64 = 0x1000,
		[Token(Token = "0x40004F5")]
		Single = 0x2000,
		[Token(Token = "0x40004F6")]
		Double = 0x4000,
		[Token(Token = "0x40004F7")]
		Decimal = 0x8000,
		[Token(Token = "0x40004F8")]
		DateTime = 0x10000,
		[Token(Token = "0x40004F9")]
		String = 0x40000
	}

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x0")]
	private static Primitives[] _primitiveConversions;

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x54EF120", Offset = "0x54EE120", VA = "0x54EF120", Slot = "5")]
	public override MethodBase BindToMethod(BindingFlags bindingAttr, MethodBase[] match, ref object[] args, ParameterModifier[] modifiers, CultureInfo cultureInfo, string[] names, out object state)
	{
		return null;
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x54F1FF0", Offset = "0x54F0FF0", VA = "0x54F1FF0", Slot = "4")]
	public override FieldInfo BindToField(BindingFlags bindingAttr, FieldInfo[] match, object value, CultureInfo cultureInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x54F26E0", Offset = "0x54F16E0", VA = "0x54F26E0", Slot = "9")]
	public override PropertyInfo SelectProperty(BindingFlags bindingAttr, PropertyInfo[] match, Type returnType, Type[] indexes, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x54F3F00", Offset = "0x54F2F00", VA = "0x54F3F00", Slot = "6")]
	public override object ChangeType(object value, Type type, CultureInfo cultureInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x54F3F60", Offset = "0x54F2F60", VA = "0x54F3F60", Slot = "7")]
	public override void ReorderArgumentArray(ref object[] args, object state)
	{
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x54F42C0", Offset = "0x54F32C0", VA = "0x54F42C0")]
	public static MethodBase ExactBinding(MethodBase[] match, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x54F47A0", Offset = "0x54F37A0", VA = "0x54F47A0")]
	public static PropertyInfo ExactPropertyBinding(PropertyInfo[] match, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x54F3860", Offset = "0x54F2860", VA = "0x54F3860")]
	private static int FindMostSpecific(ParameterInfo[] p1, int[] paramOrder1, Type paramArrayType1, ParameterInfo[] p2, int[] paramOrder2, Type paramArrayType2, Type[] types, object[] args)
	{
		return default(int);
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x54F34E0", Offset = "0x54F24E0", VA = "0x54F34E0")]
	private static int FindMostSpecificType(Type c1, Type c2, Type t)
	{
		return default(int);
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x54F1DD0", Offset = "0x54F0DD0", VA = "0x54F1DD0")]
	private static int FindMostSpecificMethod(MethodBase m1, int[] paramOrder1, Type paramArrayType1, MethodBase m2, int[] paramOrder2, Type paramArrayType2, Type[] types, object[] args)
	{
		return default(int);
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x54F2540", Offset = "0x54F1540", VA = "0x54F2540")]
	private static int FindMostSpecificField(FieldInfo cur1, FieldInfo cur2)
	{
		return default(int);
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x54F3D60", Offset = "0x54F2D60", VA = "0x54F3D60")]
	private static int FindMostSpecificProperty(PropertyInfo cur1, PropertyInfo cur2)
	{
		return default(int);
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x54F4AA0", Offset = "0x54F3AA0", VA = "0x54F4AA0")]
	internal static bool CompareMethodSigAndName(MethodBase m1, MethodBase m2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x54F4BE0", Offset = "0x54F3BE0", VA = "0x54F4BE0")]
	internal static int GetHierarchyDepth(Type t)
	{
		return default(int);
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x54F45E0", Offset = "0x54F35E0", VA = "0x54F45E0")]
	internal static MethodBase FindMostDerivedNewSlotMeth(MethodBase[] match, int cMatches)
	{
		return null;
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x54F1C60", Offset = "0x54F0C60", VA = "0x54F1C60")]
	private static void ReorderParams(int[] paramOrder, object[] vars)
	{
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x54F17F0", Offset = "0x54F07F0", VA = "0x54F17F0")]
	private static bool CreateParamOrder(int[] paramOrder, ParameterInfo[] pars, string[] names)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x54F32E0", Offset = "0x54F22E0", VA = "0x54F32E0")]
	private static bool CanConvertPrimitive(System.RuntimeType source, System.RuntimeType target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x54F1B30", Offset = "0x54F0B30", VA = "0x54F1B30")]
	private static bool CanConvertPrimitiveObjectToType(object source, System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x54F4C60", Offset = "0x54F3C60", VA = "0x54F4C60")]
	internal static bool CompareMethodSig(MethodBase m1, MethodBase m2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x54F4DA0", Offset = "0x54F3DA0", VA = "0x54F4DA0", Slot = "8")]
	public sealed override MethodBase SelectMethod(BindingFlags bindingAttr, MethodBase[] match, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x54F56B0", Offset = "0x54F46B0", VA = "0x54F56B0")]
	private static bool CanChangePrimitive(Type source, Type target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x54F5700", Offset = "0x54F4700", VA = "0x54F5700")]
	private static bool CanPrimitiveWiden(Type source, Type target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x54F57B0", Offset = "0x54F47B0", VA = "0x54F57B0")]
	public DefaultBinder()
	{
	}
}
