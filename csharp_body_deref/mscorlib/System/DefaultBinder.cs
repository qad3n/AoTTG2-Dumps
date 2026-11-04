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
[Token(Token = "0x2000185")]
internal class DefaultBinder : Binder
{
	[Token(Token = "0x2000186")]
	internal class BinderState
	{
		[Token(Token = "0x4000589")]
		[FieldOffset(Offset = "0x10")]
		internal int[] m_argsMap;

		[Token(Token = "0x400058A")]
		[FieldOffset(Offset = "0x18")]
		internal int m_originalSize;

		[Token(Token = "0x400058B")]
		[FieldOffset(Offset = "0x1C")]
		internal bool m_isParamArray;

		[Token(Token = "0x6000E10")]
		[Address(RVA = "0x1B5D7A0", Offset = "0x1B5BDA0", VA = "0x181B5D7A0")]
		internal BinderState(int[] argsMap, int originalSize, bool isParamArray)
		{
		}
	}

	[Token(Token = "0x2000187")]
	[Flags]
	private enum Primitives
	{
		[Token(Token = "0x400058D")]
		Boolean = 8,
		[Token(Token = "0x400058E")]
		Char = 0x10,
		[Token(Token = "0x400058F")]
		SByte = 0x20,
		[Token(Token = "0x4000590")]
		Byte = 0x40,
		[Token(Token = "0x4000591")]
		Int16 = 0x80,
		[Token(Token = "0x4000592")]
		UInt16 = 0x100,
		[Token(Token = "0x4000593")]
		Int32 = 0x200,
		[Token(Token = "0x4000594")]
		UInt32 = 0x400,
		[Token(Token = "0x4000595")]
		Int64 = 0x800,
		[Token(Token = "0x4000596")]
		UInt64 = 0x1000,
		[Token(Token = "0x4000597")]
		Single = 0x2000,
		[Token(Token = "0x4000598")]
		Double = 0x4000,
		[Token(Token = "0x4000599")]
		Decimal = 0x8000,
		[Token(Token = "0x400059A")]
		DateTime = 0x10000,
		[Token(Token = "0x400059B")]
		String = 0x40000
	}

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x0")]
	private static Primitives[] _primitiveConversions;

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x1B5E790", Offset = "0x1B5CD90", VA = "0x181B5E790", Slot = "5")]
	public override MethodBase BindToMethod(BindingFlags bindingAttr, MethodBase[] match, ref object[] args, ParameterModifier[] modifiers, CultureInfo cultureInfo, string[] names, out object state)
	{
		return null;
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x1B5E110", Offset = "0x1B5C710", VA = "0x181B5E110", Slot = "4")]
	public override FieldInfo BindToField(BindingFlags bindingAttr, FieldInfo[] match, object value, CultureInfo cultureInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x1B63A60", Offset = "0x1B62060", VA = "0x181B63A60", Slot = "9")]
	public override PropertyInfo SelectProperty(BindingFlags bindingAttr, PropertyInfo[] match, Type returnType, Type[] indexes, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x1B612D0", Offset = "0x1B5F8D0", VA = "0x181B612D0", Slot = "6")]
	public override object ChangeType(object value, Type type, CultureInfo cultureInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x1B62D90", Offset = "0x1B61390", VA = "0x181B62D90", Slot = "7")]
	public override void ReorderArgumentArray(ref object[] args, object state)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x1B61650", Offset = "0x1B5FC50", VA = "0x181B61650")]
	public static MethodBase ExactBinding(MethodBase[] match, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x1B618C0", Offset = "0x1B5FEC0", VA = "0x181B618C0")]
	public static PropertyInfo ExactPropertyBinding(PropertyInfo[] match, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x1B62930", Offset = "0x1B60F30", VA = "0x181B62930")]
	private static int FindMostSpecific(ParameterInfo[] p1, int[] paramOrder1, Type paramArrayType1, ParameterInfo[] p2, int[] paramOrder2, Type paramArrayType2, Type[] types, object[] args)
	{
		return default(int);
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x1B62540", Offset = "0x1B60B40", VA = "0x181B62540")]
	private static int FindMostSpecificType(Type c1, Type c2, Type t)
	{
		return default(int);
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x1B61E30", Offset = "0x1B60430", VA = "0x181B61E30")]
	private static int FindMostSpecificMethod(MethodBase m1, int[] paramOrder1, Type paramArrayType1, MethodBase m2, int[] paramOrder2, Type paramArrayType2, Type[] types, object[] args)
	{
		return default(int);
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x1B61D20", Offset = "0x1B60320", VA = "0x181B61D20")]
	private static int FindMostSpecificField(FieldInfo cur1, FieldInfo cur2)
	{
		return default(int);
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x1B62430", Offset = "0x1B60A30", VA = "0x181B62430")]
	private static int FindMostSpecificProperty(PropertyInfo cur1, PropertyInfo cur2)
	{
		return default(int);
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x1B61330", Offset = "0x1B5F930", VA = "0x181B61330")]
	internal static bool CompareMethodSigAndName(MethodBase m1, MethodBase m2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x1B62D20", Offset = "0x1B61320", VA = "0x181B62D20")]
	internal static int GetHierarchyDepth(Type t)
	{
		return default(int);
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x1B61B80", Offset = "0x1B60180", VA = "0x181B61B80")]
	internal static MethodBase FindMostDerivedNewSlotMeth(MethodBase[] match, int cMatches)
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x1B630F0", Offset = "0x1B616F0", VA = "0x181B630F0")]
	private static void ReorderParams(int[] paramOrder, object[] vars)
	{
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x1B61450", Offset = "0x1B5FA50", VA = "0x181B61450")]
	private static bool CreateParamOrder(int[] paramOrder, ParameterInfo[] pars, string[] names)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x1B60FC0", Offset = "0x1B5F5C0", VA = "0x181B60FC0")]
	private static bool CanConvertPrimitive(System.RuntimeType source, System.RuntimeType target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x1B60EB0", Offset = "0x1B5F4B0", VA = "0x181B60EB0")]
	private static bool CanConvertPrimitiveObjectToType(object source, System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x1B61330", Offset = "0x1B5F930", VA = "0x181B61330")]
	internal static bool CompareMethodSig(MethodBase m1, MethodBase m2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x1B63280", Offset = "0x1B61880", VA = "0x181B63280", Slot = "8")]
	public sealed override MethodBase SelectMethod(BindingFlags bindingAttr, MethodBase[] match, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x1B60DC0", Offset = "0x1B5F3C0", VA = "0x181B60DC0")]
	private static bool CanChangePrimitive(Type source, Type target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x1B61200", Offset = "0x1B5F800", VA = "0x181B61200")]
	private static bool CanPrimitiveWiden(Type source, Type target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public DefaultBinder()
	{
	}
}
