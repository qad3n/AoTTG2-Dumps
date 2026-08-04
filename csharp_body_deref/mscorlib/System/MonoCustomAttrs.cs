// ==================== AoTTG2 cross-reference ====================
// Type: System.MonoCustomAttrs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000192")]
internal static class MonoCustomAttrs
{
	[Token(Token = "0x2000193")]
	private class AttributeInfo
	{
		[Token(Token = "0x40006B3")]
		[FieldOffset(Offset = "0x10")]
		private AttributeUsageAttribute _usage;

		[Token(Token = "0x40006B4")]
		[FieldOffset(Offset = "0x18")]
		private int _inheritanceLevel;

		[Token(Token = "0x1700016F")]
		public AttributeUsageAttribute Usage
		{
			[Token(Token = "0x6000FC8")]
			[Address(RVA = "0x3D113C0", Offset = "0x3D113C0", VA = "0x3D113C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000170")]
		public int InheritanceLevel
		{
			[Token(Token = "0x6000FC9")]
			[Address(RVA = "0x3D113D0", Offset = "0x3D113D0", VA = "0x3D113D0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000FC7")]
		[Address(RVA = "0x3D0E690", Offset = "0x3D0E690", VA = "0x3D0E690")]
		public AttributeInfo(AttributeUsageAttribute usage, int inheritanceLevel)
		{
		}
	}

	[Token(Token = "0x40006B0")]
	[FieldOffset(Offset = "0x0")]
	private static Assembly corlib;

	[Token(Token = "0x40006B1")]
	[ThreadStatic]
	private static Dictionary<Type, AttributeUsageAttribute> usage_cache;

	[Token(Token = "0x40006B2")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AttributeUsageAttribute DefaultAttributeUsage;

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x3D0CC80", Offset = "0x3D0CC80", VA = "0x3D0CC80")]
	private static bool IsUserCattrProvider(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x3D0CE40", Offset = "0x3D0CE40", VA = "0x3D0CE40")]
	internal static extern Attribute[] GetCustomAttributesInternal(ICustomAttributeProvider obj, Type attributeType, bool pseudoAttrs);

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x3D0CE50", Offset = "0x3D0CE50", VA = "0x3D0CE50")]
	internal static object[] GetPseudoCustomAttributes(ICustomAttributeProvider obj, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x3D0D1C0", Offset = "0x3D0D1C0", VA = "0x3D0D1C0")]
	private static object[] GetPseudoCustomAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x3D0D350", Offset = "0x3D0D350", VA = "0x3D0D350")]
	internal static object[] GetCustomAttributesBase(ICustomAttributeProvider obj, Type attributeType, bool inheritedOnly)
	{
		return null;
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x3D0D540", Offset = "0x3D0D540", VA = "0x3D0D540")]
	internal static object[] GetCustomAttributes(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x3D0E6B0", Offset = "0x3D0E6B0", VA = "0x3D0E6B0")]
	internal static object[] GetCustomAttributes(ICustomAttributeProvider obj, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x3D0E820", Offset = "0x3D0E820", VA = "0x3D0E820")]
	private static extern CustomAttributeData[] GetCustomAttributesDataInternal(ICustomAttributeProvider obj);

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x3D0E830", Offset = "0x3D0E830", VA = "0x3D0E830")]
	internal static IList<CustomAttributeData> GetCustomAttributesData(ICustomAttributeProvider obj, bool inherit = false)
	{
		return null;
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x3D0EB80", Offset = "0x3D0EB80", VA = "0x3D0EB80")]
	internal static IList<CustomAttributeData> GetCustomAttributesData(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x3D0E940", Offset = "0x3D0E940", VA = "0x3D0E940")]
	internal static IList<CustomAttributeData> GetCustomAttributesDataBase(ICustomAttributeProvider obj, Type attributeType, bool inheritedOnly)
	{
		return null;
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x3D10310", Offset = "0x3D10310", VA = "0x3D10310")]
	internal static CustomAttributeData[] GetPseudoCustomAttributesData(ICustomAttributeProvider obj, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x3D10690", Offset = "0x3D10690", VA = "0x3D10690")]
	private static CustomAttributeData[] GetPseudoCustomAttributesData(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x3D108F0", Offset = "0x3D108F0", VA = "0x3D108F0")]
	internal static bool IsDefined(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x3D10BD0", Offset = "0x3D10BD0", VA = "0x3D10BD0")]
	internal static extern bool IsDefinedInternal(ICustomAttributeProvider obj, Type AttributeType);

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x3D10BE0", Offset = "0x3D10BE0", VA = "0x3D10BE0")]
	private static PropertyInfo GetBasePropertyDefinition(System.Reflection.RuntimePropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x3D10F00", Offset = "0x3D10F00", VA = "0x3D10F00")]
	private static EventInfo GetBaseEventDefinition(System.Reflection.RuntimeEventInfo evt)
	{
		return null;
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x3D0E150", Offset = "0x3D0E150", VA = "0x3D0E150")]
	private static ICustomAttributeProvider GetBase(ICustomAttributeProvider obj)
	{
		return null;
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x3D11110", Offset = "0x3D11110", VA = "0x3D11110")]
	private static AttributeUsageAttribute RetrieveAttributeUsageNoCache(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x3D0E4E0", Offset = "0x3D0E4E0", VA = "0x3D0E4E0")]
	private static AttributeUsageAttribute RetrieveAttributeUsage(Type attributeType)
	{
		return null;
	}
}
