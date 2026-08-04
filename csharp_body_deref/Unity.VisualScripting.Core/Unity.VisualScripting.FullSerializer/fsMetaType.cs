// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsMetaType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000213")]
public class fsMetaType
{
	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0x10")]
	public Type ReflectedType;

	[Token(Token = "0x40009CB")]
	[FieldOffset(Offset = "0x18")]
	private bool _hasEmittedAotData;

	[Token(Token = "0x40009CC")]
	[FieldOffset(Offset = "0x19")]
	private bool? _hasDefaultConstructorCache;

	[Token(Token = "0x40009CD")]
	[FieldOffset(Offset = "0x1B")]
	private bool _isDefaultConstructorPublic;

	[Token(Token = "0x40009CF")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<fsConfig, Dictionary<Type, fsMetaType>> _configMetaTypes;

	[Token(Token = "0x17000217")]
	public fsMetaProperty[] Properties
	{
		[Token(Token = "0x60012C9")]
		[Address(RVA = "0x4D89400", Offset = "0x4D89400", VA = "0x4D89400")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60012CA")]
		[Address(RVA = "0x4D89410", Offset = "0x4D89410", VA = "0x4D89410")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000218")]
	public bool HasDefaultConstructor
	{
		[Token(Token = "0x60012CB")]
		[Address(RVA = "0x4D89420", Offset = "0x4D89420", VA = "0x4D89420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x4D88C90", Offset = "0x4D88C90", VA = "0x4D88C90")]
	private fsMetaType(fsConfig config, Type reflectedType)
	{
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x4D89820", Offset = "0x4D89820", VA = "0x4D89820")]
	public bool EmitAotData()
	{
		return default(bool);
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x4D898F0", Offset = "0x4D898F0", VA = "0x4D898F0")]
	public object CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x4D89D50", Offset = "0x4D89D50", VA = "0x4D89D50")]
	public static fsMetaType Get(fsConfig config, Type type)
	{
		return null;
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x4D8A050", Offset = "0x4D8A050", VA = "0x4D8A050")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x4D88D90", Offset = "0x4D88D90", VA = "0x4D88D90")]
	private static void CollectProperties(fsConfig config, List<fsMetaProperty> properties, Type reflectedType)
	{
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x4D8A7A0", Offset = "0x4D8A7A0", VA = "0x4D8A7A0")]
	private static bool IsAutoProperty(PropertyInfo property, MemberInfo[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x4D8A270", Offset = "0x4D8A270", VA = "0x4D8A270")]
	private static bool CanSerializeProperty(fsConfig config, PropertyInfo property, MemberInfo[] members, bool annotationFreeValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x4D8A590", Offset = "0x4D8A590", VA = "0x4D8A590")]
	private static bool CanSerializeField(fsConfig config, FieldInfo field, bool annotationFreeValue)
	{
		return default(bool);
	}
}
