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

[Token(Token = "0x20001F7")]
public class fsMetaType
{
	[Token(Token = "0x4000976")]
	[FieldOffset(Offset = "0x10")]
	public Type ReflectedType;

	[Token(Token = "0x4000977")]
	[FieldOffset(Offset = "0x18")]
	private bool _hasEmittedAotData;

	[Token(Token = "0x4000978")]
	[FieldOffset(Offset = "0x19")]
	private bool? _hasDefaultConstructorCache;

	[Token(Token = "0x4000979")]
	[FieldOffset(Offset = "0x1B")]
	private bool _isDefaultConstructorPublic;

	[Token(Token = "0x400097B")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<fsConfig, Dictionary<Type, fsMetaType>> _configMetaTypes;

	[Token(Token = "0x17000203")]
	public fsMetaProperty[] Properties
	{
		[Token(Token = "0x6001212")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001213")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000204")]
	public bool HasDefaultConstructor
	{
		[Token(Token = "0x6001214")]
		[Address(RVA = "0x2E6BE50", Offset = "0x2E6A450", VA = "0x182E6BE50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x2E6BD60", Offset = "0x2E6A360", VA = "0x182E6BD60")]
	private fsMetaType(fsConfig config, Type reflectedType)
	{
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x2E6B650", Offset = "0x2E69C50", VA = "0x182E6B650")]
	public bool EmitAotData()
	{
		return default(bool);
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x2E6B160", Offset = "0x2E69760", VA = "0x182E6B160")]
	public object CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x2E6B880", Offset = "0x2E69E80", VA = "0x182E6B880")]
	public static fsMetaType Get(fsConfig config, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001218")]
	[Address(RVA = "0x2E6AA90", Offset = "0x2E69090", VA = "0x182E6AA90")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x2E6ABE0", Offset = "0x2E691E0", VA = "0x182E6ABE0")]
	private static void CollectProperties(fsConfig config, List<fsMetaProperty> properties, Type reflectedType)
	{
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x2E6BBE0", Offset = "0x2E6A1E0", VA = "0x182E6BBE0")]
	private static bool IsAutoProperty(PropertyInfo property, MemberInfo[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x2E6A6C0", Offset = "0x2E68CC0", VA = "0x182E6A6C0")]
	private static bool CanSerializeProperty(fsConfig config, PropertyInfo property, MemberInfo[] members, bool annotationFreeValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600121C")]
	[Address(RVA = "0x2E6A4D0", Offset = "0x2E68AD0", VA = "0x182E6A4D0")]
	private static bool CanSerializeField(fsConfig config, FieldInfo field, bool annotationFreeValue)
	{
		return default(bool);
	}
}
