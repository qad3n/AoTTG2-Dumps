// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Member
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000EE")]
[SerializationVersion("A", new Type[] { })]
public sealed class Member : ISerializationCallbackReceiver
{
	[Token(Token = "0x20000EF")]
	public enum Source
	{
		[Token(Token = "0x4000191")]
		Unknown,
		[Token(Token = "0x4000192")]
		Field,
		[Token(Token = "0x4000193")]
		Property,
		[Token(Token = "0x4000194")]
		Method,
		[Token(Token = "0x4000195")]
		Constructor
	}

	[Token(Token = "0x400017E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[SerializeAs("name")]
	private string _name;

	[Token(Token = "0x400017F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeAs("parameterTypes")]
	private Type[] _parameterTypes;

	[Token(Token = "0x4000180")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeAs("targetType")]
	private Type _targetType;

	[Token(Token = "0x4000181")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeAs("targetTypeName")]
	private string _targetTypeName;

	[Token(Token = "0x4000182")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[DoNotSerialize]
	private Source _source;

	[Token(Token = "0x4000183")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[DoNotSerialize]
	private FieldInfo _fieldInfo;

	[Token(Token = "0x4000184")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[DoNotSerialize]
	private PropertyInfo _propertyInfo;

	[Token(Token = "0x4000185")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[DoNotSerialize]
	private MethodInfo _methodInfo;

	[Token(Token = "0x4000186")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[DoNotSerialize]
	private ConstructorInfo _constructorInfo;

	[Token(Token = "0x4000187")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[DoNotSerialize]
	private bool _isExtension;

	[Token(Token = "0x4000188")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	[DoNotSerialize]
	private bool _isInvokedAsExtension;

	[Token(Token = "0x4000189")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[DoNotSerialize]
	private IOptimizedAccessor fieldAccessor;

	[Token(Token = "0x400018A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[DoNotSerialize]
	private IOptimizedAccessor propertyAccessor;

	[Token(Token = "0x400018B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[DoNotSerialize]
	private IOptimizedInvoker methodInvoker;

	[Token(Token = "0x400018D")]
	public const MemberTypes SupportedMemberTypes = MemberTypes.Constructor | MemberTypes.Field | MemberTypes.Method | MemberTypes.Property;

	[Token(Token = "0x400018E")]
	public const BindingFlags SupportedBindingFlags = BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.FlattenHierarchy;

	[Token(Token = "0x400018F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly object[] EmptyObjects;

	[Token(Token = "0x17000120")]
	[DoNotSerialize]
	public Type targetType
	{
		[Token(Token = "0x60005B9")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x2DB80F0", Offset = "0x2DB66F0", VA = "0x182DB80F0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000121")]
	[DoNotSerialize]
	public string targetTypeName
	{
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000122")]
	[DoNotSerialize]
	public string name
	{
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BD")]
		[Address(RVA = "0x2DB8080", Offset = "0x2DB6680", VA = "0x182DB8080")]
		private set
		{
		}
	}

	[Token(Token = "0x17000123")]
	[DoNotSerialize]
	public bool isReflected
	{
		[Token(Token = "0x60005BE")]
		[Address(RVA = "0x1D2B360", Offset = "0x1D29960", VA = "0x181D2B360")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x1D2B400", Offset = "0x1D29A00", VA = "0x181D2B400")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000124")]
	[DoNotSerialize]
	public Source source
	{
		[Token(Token = "0x60005C0")]
		[Address(RVA = "0x2DB7E60", Offset = "0x2DB6460", VA = "0x182DB7E60")]
		get
		{
			return default(Source);
		}
		[Token(Token = "0x60005C1")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		private set
		{
		}
	}

	[Token(Token = "0x17000125")]
	[DoNotSerialize]
	public FieldInfo fieldInfo
	{
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x2DB7070", Offset = "0x2DB5670", VA = "0x182DB7070")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000126")]
	[DoNotSerialize]
	public PropertyInfo propertyInfo
	{
		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x2DB7990", Offset = "0x2DB5F90", VA = "0x182DB7990")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		private set
		{
		}
	}

	[Token(Token = "0x17000127")]
	[DoNotSerialize]
	public MethodInfo methodInfo
	{
		[Token(Token = "0x60005C6")]
		[Address(RVA = "0x2DB7930", Offset = "0x2DB5F30", VA = "0x182DB7930")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C7")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		private set
		{
		}
	}

	[Token(Token = "0x17000128")]
	[DoNotSerialize]
	public ConstructorInfo constructorInfo
	{
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x2DB6FC0", Offset = "0x2DB55C0", VA = "0x182DB6FC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000129")]
	[DoNotSerialize]
	public bool isExtension
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x2DB7380", Offset = "0x2DB5980", VA = "0x182DB7380")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005CB")]
		[Address(RVA = "0x19377D0", Offset = "0x1935DD0", VA = "0x1819377D0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	[DoNotSerialize]
	public bool isInvokedAsExtension
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x2DB7550", Offset = "0x2DB5B50", VA = "0x182DB7550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x1C5E470", Offset = "0x1C5CA70", VA = "0x181C5E470")]
		private set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	[DoNotSerialize]
	public Type[] parameterTypes
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x2DB80D0", Offset = "0x2DB66D0", VA = "0x182DB80D0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public MethodBase methodBase
	{
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x2DB78D0", Offset = "0x2DB5ED0", VA = "0x182DB78D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	private MemberInfo _info
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x2DB6DF0", Offset = "0x2DB53F0", VA = "0x182DB6DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012E")]
	public MemberInfo info
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x2DB70A0", Offset = "0x2DB56A0", VA = "0x182DB70A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public Type type
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x2DB7E90", Offset = "0x2DB6490", VA = "0x182DB7E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000130")]
	public bool isCoroutine
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x2DB72F0", Offset = "0x2DB58F0", VA = "0x182DB72F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000131")]
	public bool isYieldInstruction
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x2DB7820", Offset = "0x2DB5E20", VA = "0x182DB7820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000132")]
	public bool isGettable
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x2DB73E0", Offset = "0x2DB59E0", VA = "0x182DB73E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000133")]
	public bool isPubliclyGettable
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x2DB77E0", Offset = "0x2DB5DE0", VA = "0x182DB77E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000134")]
	public bool isSettable
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x2DB7810", Offset = "0x2DB5E10", VA = "0x182DB7810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000135")]
	public bool isPubliclySettable
	{
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x2DB7800", Offset = "0x2DB5E00", VA = "0x182DB7800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000136")]
	public bool isInvocable
	{
		[Token(Token = "0x60005DA")]
		[Address(RVA = "0x2DB74B0", Offset = "0x2DB5AB0", VA = "0x182DB74B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000137")]
	public bool isPubliclyInvocable
	{
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x2DB77F0", Offset = "0x2DB5DF0", VA = "0x182DB77F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000138")]
	public bool isAccessor
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x2DB71A0", Offset = "0x2DB57A0", VA = "0x182DB71A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	public bool isField
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x2DB73B0", Offset = "0x2DB59B0", VA = "0x182DB73B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	public bool isProperty
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x2DB76C0", Offset = "0x2DB5CC0", VA = "0x182DB76C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	public bool isMethod
	{
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x2DB7580", Offset = "0x2DB5B80", VA = "0x182DB7580")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013C")]
	public bool isConstructor
	{
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x2DB7240", Offset = "0x2DB5840", VA = "0x182DB7240")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	public bool requiresTarget
	{
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x2DB7CD0", Offset = "0x2DB62D0", VA = "0x182DB7CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013E")]
	public bool isOperator
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x2DB75B0", Offset = "0x2DB5BB0", VA = "0x182DB75B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public bool isConversion
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x2DB7270", Offset = "0x2DB5870", VA = "0x182DB7270")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000140")]
	public int order
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x2DB7960", Offset = "0x2DB5F60", VA = "0x182DB7960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000141")]
	public Type declaringType
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x2DB6FF0", Offset = "0x2DB55F0", VA = "0x182DB6FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	public bool isInherited
	{
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x2DB7460", Offset = "0x2DB5A60", VA = "0x182DB7460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000143")]
	public Type pseudoDeclaringType
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x2DB79C0", Offset = "0x2DB5FC0", VA = "0x182DB79C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	public bool isPseudoInherited
	{
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x2DB76F0", Offset = "0x2DB5CF0", VA = "0x182DB76F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000145")]
	public bool isIndexer
	{
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x2DB73F0", Offset = "0x2DB59F0", VA = "0x182DB73F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000146")]
	public bool isPredictable
	{
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x2DB7630", Offset = "0x2DB5C30", VA = "0x182DB7630")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000147")]
	public bool allowsNull
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x2DB6EB0", Offset = "0x2DB54B0", VA = "0x182DB6EB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	[Obsolete("This parameterless constructor is only made public for serialization. Use another constructor instead.")]
	public Member()
	{
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x2DB6420", Offset = "0x2DB4A20", VA = "0x182DB6420")]
	public Member(Type targetType, string name, [Optional] Type[] parameterTypes)
	{
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x2DB62B0", Offset = "0x2DB48B0", VA = "0x182DB62B0")]
	public Member(Type targetType, FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x2DB6720", Offset = "0x2DB4D20", VA = "0x182DB6720")]
	public Member(Type targetType, PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x2DB6B20", Offset = "0x2DB5120", VA = "0x182DB6B20")]
	public Member(Type targetType, MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x2DB6890", Offset = "0x2DB4E90", VA = "0x182DB6890")]
	public Member(Type targetType, ConstructorInfo constructorInfo)
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x2DB6160", Offset = "0x2DB4760", VA = "0x182DB6160", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x2DB3F30", Offset = "0x2DB2530", VA = "0x182DB3F30")]
	public bool IsGettable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x2DB4280", Offset = "0x2DB2880", VA = "0x182DB4280")]
	public bool IsSettable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x2DB4180", Offset = "0x2DB2780", VA = "0x182DB4180")]
	public bool IsInvocable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x2DB25B0", Offset = "0x2DB0BB0", VA = "0x182DB25B0")]
	private void EnsureExplicitParameterTypes()
	{
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x2DB51A0", Offset = "0x2DB37A0", VA = "0x182DB51A0")]
	public void Reflect()
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x2DB49D0", Offset = "0x2DB2FD0", VA = "0x182DB49D0")]
	private void ReflectField(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x2DB4FC0", Offset = "0x2DB35C0", VA = "0x182DB4FC0")]
	private void ReflectProperty(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x2DB4570", Offset = "0x2DB2B70", VA = "0x182DB4570")]
	private void ReflectConstructor(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x2DB4BB0", Offset = "0x2DB31B0", VA = "0x182DB4BB0")]
	private void ReflectMethod(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x2DB4440", Offset = "0x2DB2A40", VA = "0x182DB4440")]
	public void Prewarm()
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x2DB2A30", Offset = "0x2DB1030", VA = "0x182DB2A30")]
	public void EnsureReflected()
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x2DB28F0", Offset = "0x2DB0EF0", VA = "0x182DB28F0")]
	public void EnsureReady(object target)
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x2DB2D80", Offset = "0x2DB1380", VA = "0x182DB2D80")]
	public object Get(object target)
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	public T Get<T>(object target)
	{
		return (T)null;
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x2DB5C80", Offset = "0x2DB4280", VA = "0x182DB5C80")]
	public object Set(object target, object value)
	{
		return null;
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x2DB2620", Offset = "0x2DB0C20", VA = "0x182DB2620")]
	private void EnsureInvocable(object target)
	{
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x2DB2CB0", Offset = "0x2DB12B0", VA = "0x182DB2CB0")]
	public IEnumerable<ParameterInfo> GetParameterInfos()
	{
		return null;
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x2DB3BF0", Offset = "0x2DB21F0", VA = "0x182DB3BF0")]
	public object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x2DB3610", Offset = "0x2DB1C10", VA = "0x182DB3610")]
	public object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x2DB37A0", Offset = "0x2DB1DA0", VA = "0x182DB37A0")]
	public object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x2DB3D10", Offset = "0x2DB2310", VA = "0x182DB3D10")]
	public object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x2DB3960", Offset = "0x2DB1F60", VA = "0x182DB3960")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x2DB2FC0", Offset = "0x2DB15C0", VA = "0x182DB2FC0")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x2DB3480", Offset = "0x2DB1A80", VA = "0x182DB3480")]
	public object Invoke(object target, params object[] arguments)
	{
		return null;
	}

	[Token(Token = "0x6000606")]
	public T Invoke<T>(object target)
	{
		return (T)null;
	}

	[Token(Token = "0x6000607")]
	public T Invoke<T>(object target, object arg0)
	{
		return (T)null;
	}

	[Token(Token = "0x6000608")]
	public T Invoke<T>(object target, object arg0, object arg1)
	{
		return (T)null;
	}

	[Token(Token = "0x6000609")]
	public T Invoke<T>(object target, object arg0, object arg1, object arg2)
	{
		return (T)null;
	}

	[Token(Token = "0x600060A")]
	public T Invoke<T>(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return (T)null;
	}

	[Token(Token = "0x600060B")]
	public T Invoke<T>(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return (T)null;
	}

	[Token(Token = "0x600060C")]
	public T Invoke<T>(object target, params object[] arguments)
	{
		return (T)null;
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x2DB2A40", Offset = "0x2DB1040", VA = "0x182DB2A40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x2DB2BF0", Offset = "0x2DB11F0", VA = "0x182DB2BF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x1A41670", Offset = "0x1A3FC70", VA = "0x181A41670")]
	public static bool operator ==(Member a, Member b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x2DB7FF0", Offset = "0x2DB65F0", VA = "0x182DB7FF0")]
	public static bool operator !=(Member a, Member b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x2DB6050", Offset = "0x2DB4650", VA = "0x182DB6050")]
	public string ToUniqueString()
	{
		return null;
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x2DB5FD0", Offset = "0x2DB45D0", VA = "0x182DB5FD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x2DB5ED0", Offset = "0x2DB44D0", VA = "0x182DB5ED0")]
	public Member ToDeclarer()
	{
		return null;
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x2DB5F50", Offset = "0x2DB4550", VA = "0x182DB5F50")]
	public Member ToPseudoDeclarer()
	{
		return null;
	}
}
