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
			[Address(RVA = "0x502B8A0", Offset = "0x502B8A0", VA = "0x502B8A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000170")]
		public int InheritanceLevel
		{
			[Token(Token = "0x6000FC9")]
			[Address(RVA = "0x502B8B0", Offset = "0x502B8B0", VA = "0x502B8B0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000FC7")]
		[Address(RVA = "0x5028B70", Offset = "0x5028B70", VA = "0x5028B70")]
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
	[Address(RVA = "0x5027160", Offset = "0x5027160", VA = "0x5027160")]
	private static bool IsUserCattrProvider(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x5027320", Offset = "0x5027320", VA = "0x5027320")]
	internal static extern Attribute[] GetCustomAttributesInternal(ICustomAttributeProvider obj, Type attributeType, bool pseudoAttrs);

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x5027330", Offset = "0x5027330", VA = "0x5027330")]
	internal static object[] GetPseudoCustomAttributes(ICustomAttributeProvider obj, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x50276A0", Offset = "0x50276A0", VA = "0x50276A0")]
	private static object[] GetPseudoCustomAttributes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x5027830", Offset = "0x5027830", VA = "0x5027830")]
	internal static object[] GetCustomAttributesBase(ICustomAttributeProvider obj, Type attributeType, bool inheritedOnly)
	{
		return null;
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x5027A20", Offset = "0x5027A20", VA = "0x5027A20")]
	internal static object[] GetCustomAttributes(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x5028B90", Offset = "0x5028B90", VA = "0x5028B90")]
	internal static object[] GetCustomAttributes(ICustomAttributeProvider obj, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x5028D00", Offset = "0x5028D00", VA = "0x5028D00")]
	private static extern CustomAttributeData[] GetCustomAttributesDataInternal(ICustomAttributeProvider obj);

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x5028D10", Offset = "0x5028D10", VA = "0x5028D10")]
	internal static IList<CustomAttributeData> GetCustomAttributesData(ICustomAttributeProvider obj, bool inherit = false)
	{
		return null;
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x5029060", Offset = "0x5029060", VA = "0x5029060")]
	internal static IList<CustomAttributeData> GetCustomAttributesData(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x5028E20", Offset = "0x5028E20", VA = "0x5028E20")]
	internal static IList<CustomAttributeData> GetCustomAttributesDataBase(ICustomAttributeProvider obj, Type attributeType, bool inheritedOnly)
	{
		return null;
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x502A7F0", Offset = "0x502A7F0", VA = "0x502A7F0")]
	internal static CustomAttributeData[] GetPseudoCustomAttributesData(ICustomAttributeProvider obj, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x502AB70", Offset = "0x502AB70", VA = "0x502AB70")]
	private static CustomAttributeData[] GetPseudoCustomAttributesData(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x502ADD0", Offset = "0x502ADD0", VA = "0x502ADD0")]
	internal static bool IsDefined(ICustomAttributeProvider obj, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x502B0B0", Offset = "0x502B0B0", VA = "0x502B0B0")]
	internal static extern bool IsDefinedInternal(ICustomAttributeProvider obj, Type AttributeType);

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x502B0C0", Offset = "0x502B0C0", VA = "0x502B0C0")]
	private static PropertyInfo GetBasePropertyDefinition(System.Reflection.RuntimePropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x502B3E0", Offset = "0x502B3E0", VA = "0x502B3E0")]
	private static EventInfo GetBaseEventDefinition(System.Reflection.RuntimeEventInfo evt)
	{
		return null;
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x5028630", Offset = "0x5028630", VA = "0x5028630")]
	private static ICustomAttributeProvider GetBase(ICustomAttributeProvider obj)
	{
		return null;
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x502B5F0", Offset = "0x502B5F0", VA = "0x502B5F0")]
	private static AttributeUsageAttribute RetrieveAttributeUsageNoCache(Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x50289C0", Offset = "0x50289C0", VA = "0x50289C0")]
	private static AttributeUsageAttribute RetrieveAttributeUsage(Type attributeType)
	{
		return null;
	}
}
