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
		[Address(RVA = "0x67B1B60", Offset = "0x67B0B60", VA = "0x67B1B60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x67B0DB0", Offset = "0x67AFDB0", VA = "0x67B0DB0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000121")]
	[DoNotSerialize]
	public string targetTypeName
	{
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x67B1B70", Offset = "0x67B0B70", VA = "0x67B1B70")]
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
		[Address(RVA = "0x67B1B80", Offset = "0x67B0B80", VA = "0x67B1B80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005BD")]
		[Address(RVA = "0x67B0EB0", Offset = "0x67AFEB0", VA = "0x67B0EB0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000123")]
	[DoNotSerialize]
	public bool isReflected
	{
		[Token(Token = "0x60005BE")]
		[Address(RVA = "0x67B1B90", Offset = "0x67B0B90", VA = "0x67B1B90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x67B1BA0", Offset = "0x67B0BA0", VA = "0x67B1BA0")]
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
		[Address(RVA = "0x67B1BB0", Offset = "0x67B0BB0", VA = "0x67B1BB0")]
		get
		{
			return default(Source);
		}
		[Token(Token = "0x60005C1")]
		[Address(RVA = "0x67B1BE0", Offset = "0x67B0BE0", VA = "0x67B1BE0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000125")]
	[DoNotSerialize]
	public FieldInfo fieldInfo
	{
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x67B1BF0", Offset = "0x67B0BF0", VA = "0x67B1BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x67B1C10", Offset = "0x67B0C10", VA = "0x67B1C10")]
		private set
		{
		}
	}

	[Token(Token = "0x17000126")]
	[DoNotSerialize]
	public PropertyInfo propertyInfo
	{
		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x67B1C20", Offset = "0x67B0C20", VA = "0x67B1C20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x67B1C40", Offset = "0x67B0C40", VA = "0x67B1C40")]
		private set
		{
		}
	}

	[Token(Token = "0x17000127")]
	[DoNotSerialize]
	public MethodInfo methodInfo
	{
		[Token(Token = "0x60005C6")]
		[Address(RVA = "0x67B1C50", Offset = "0x67B0C50", VA = "0x67B1C50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x67B1C70", Offset = "0x67B0C70", VA = "0x67B1C70")]
		private set
		{
		}
	}

	[Token(Token = "0x17000128")]
	[DoNotSerialize]
	public ConstructorInfo constructorInfo
	{
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x67B1C80", Offset = "0x67B0C80", VA = "0x67B1C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x67B1CA0", Offset = "0x67B0CA0", VA = "0x67B1CA0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000129")]
	[DoNotSerialize]
	public bool isExtension
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x67B1CB0", Offset = "0x67B0CB0", VA = "0x67B1CB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005CB")]
		[Address(RVA = "0x67B1CD0", Offset = "0x67B0CD0", VA = "0x67B1CD0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	[DoNotSerialize]
	public bool isInvokedAsExtension
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x67B1CE0", Offset = "0x67B0CE0", VA = "0x67B1CE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x67B1D00", Offset = "0x67B0D00", VA = "0x67B1D00")]
		private set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	[DoNotSerialize]
	public Type[] parameterTypes
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x67B1D10", Offset = "0x67B0D10", VA = "0x67B1D10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x67B0EF0", Offset = "0x67AFEF0", VA = "0x67B0EF0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	public MethodBase methodBase
	{
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x67B1D20", Offset = "0x67B0D20", VA = "0x67B1D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	private MemberInfo _info
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x67B1D90", Offset = "0x67B0D90", VA = "0x67B1D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012E")]
	public MemberInfo info
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x67B1E30", Offset = "0x67B0E30", VA = "0x67B1E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public Type type
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x67B1F10", Offset = "0x67B0F10", VA = "0x67B1F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000130")]
	public bool isCoroutine
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x67B2060", Offset = "0x67B1060", VA = "0x67B2060")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000131")]
	public bool isYieldInstruction
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x67B2100", Offset = "0x67B1100", VA = "0x67B2100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000132")]
	public bool isGettable
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x67B20F0", Offset = "0x67B10F0", VA = "0x67B20F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000133")]
	public bool isPubliclyGettable
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x67B23C0", Offset = "0x67B13C0", VA = "0x67B23C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000134")]
	public bool isSettable
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x67B23D0", Offset = "0x67B13D0", VA = "0x67B23D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000135")]
	public bool isPubliclySettable
	{
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x67B2580", Offset = "0x67B1580", VA = "0x67B2580")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000136")]
	public bool isInvocable
	{
		[Token(Token = "0x60005DA")]
		[Address(RVA = "0x67B2590", Offset = "0x67B1590", VA = "0x67B2590")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000137")]
	public bool isPubliclyInvocable
	{
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x67B2680", Offset = "0x67B1680", VA = "0x67B2680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000138")]
	public bool isAccessor
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x67B2690", Offset = "0x67B1690", VA = "0x67B2690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	public bool isField
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x67B2720", Offset = "0x67B1720", VA = "0x67B2720")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	public bool isProperty
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x67B2750", Offset = "0x67B1750", VA = "0x67B2750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	public bool isMethod
	{
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x67B2780", Offset = "0x67B1780", VA = "0x67B2780")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013C")]
	public bool isConstructor
	{
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x67B27B0", Offset = "0x67B17B0", VA = "0x67B27B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	public bool requiresTarget
	{
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x67B27E0", Offset = "0x67B17E0", VA = "0x67B27E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013E")]
	public bool isOperator
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x67B2950", Offset = "0x67B1950", VA = "0x67B2950")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public bool isConversion
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x67B29E0", Offset = "0x67B19E0", VA = "0x67B29E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000140")]
	public int order
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x67B2A70", Offset = "0x67B1A70", VA = "0x67B2A70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000141")]
	public Type declaringType
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x67B2AA0", Offset = "0x67B1AA0", VA = "0x67B2AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	public bool isInherited
	{
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x67B2B10", Offset = "0x67B1B10", VA = "0x67B2B10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000143")]
	public Type pseudoDeclaringType
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x67B2BB0", Offset = "0x67B1BB0", VA = "0x67B2BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	public bool isPseudoInherited
	{
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x67B2F10", Offset = "0x67B1F10", VA = "0x67B2F10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000145")]
	public bool isIndexer
	{
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x67B2FD0", Offset = "0x67B1FD0", VA = "0x67B2FD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000146")]
	public bool isPredictable
	{
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x67B3030", Offset = "0x67B2030", VA = "0x67B3030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000147")]
	public bool allowsNull
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x67B30C0", Offset = "0x67B20C0", VA = "0x67B30C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x67B0A70", Offset = "0x67AFA70", VA = "0x67B0A70")]
	[Obsolete("This parameterless constructor is only made public for serialization. Use another constructor instead.")]
	public Member()
	{
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x67B0A80", Offset = "0x67AFA80", VA = "0x67B0A80")]
	public Member(Type targetType, string name, [Optional] Type[] parameterTypes)
	{
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x67B0F10", Offset = "0x67AFF10", VA = "0x67B0F10")]
	public Member(Type targetType, FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x67B1180", Offset = "0x67B0180", VA = "0x67B1180")]
	public Member(Type targetType, PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x67B13F0", Offset = "0x67B03F0", VA = "0x67B13F0")]
	public Member(Type targetType, MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x67B17D0", Offset = "0x67B07D0", VA = "0x67B17D0")]
	public Member(Type targetType, ConstructorInfo constructorInfo)
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x67B31E0", Offset = "0x67B21E0", VA = "0x67B31E0", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x67B31F0", Offset = "0x67B21F0", VA = "0x67B31F0", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x67B21B0", Offset = "0x67B11B0", VA = "0x67B21B0")]
	public bool IsGettable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x67B23E0", Offset = "0x67B13E0", VA = "0x67B23E0")]
	public bool IsSettable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x67B25A0", Offset = "0x67B15A0", VA = "0x67B25A0")]
	public bool IsInvocable(bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x67B3340", Offset = "0x67B2340", VA = "0x67B3340")]
	private void EnsureExplicitParameterTypes()
	{
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x67B33A0", Offset = "0x67B23A0", VA = "0x67B33A0")]
	public void Reflect()
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x67B3E50", Offset = "0x67B2E50", VA = "0x67B3E50")]
	private void ReflectField(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x67B3FF0", Offset = "0x67B2FF0", VA = "0x67B3FF0")]
	private void ReflectProperty(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x67B4550", Offset = "0x67B3550", VA = "0x67B4550")]
	private void ReflectConstructor(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x67B4190", Offset = "0x67B3190", VA = "0x67B4190")]
	private void ReflectMethod(IEnumerable<MemberInfo> candidates)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x67B4980", Offset = "0x67B3980", VA = "0x67B4980")]
	public void Prewarm()
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x67B1BD0", Offset = "0x67B0BD0", VA = "0x67B1BD0")]
	public void EnsureReflected()
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x67B4B00", Offset = "0x67B3B00", VA = "0x67B4B00")]
	public void EnsureReady(object target)
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x67B4BC0", Offset = "0x67B3BC0", VA = "0x67B4BC0")]
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
	[Address(RVA = "0x67B4E60", Offset = "0x67B3E60", VA = "0x67B4E60")]
	public object Set(object target, object value)
	{
		return null;
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x67B5100", Offset = "0x67B4100", VA = "0x67B5100")]
	private void EnsureInvocable(object target)
	{
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x67B5350", Offset = "0x67B4350", VA = "0x67B5350")]
	public IEnumerable<ParameterInfo> GetParameterInfos()
	{
		return null;
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x67B5420", Offset = "0x67B4420", VA = "0x67B5420")]
	public object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x67B5610", Offset = "0x67B4610", VA = "0x67B5610")]
	public object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x67B5860", Offset = "0x67B4860", VA = "0x67B5860")]
	public object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x67B5B00", Offset = "0x67B4B00", VA = "0x67B5B00")]
	public object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x67B5E00", Offset = "0x67B4E00", VA = "0x67B5E00")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x67B6150", Offset = "0x67B5150", VA = "0x67B6150")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x67B6660", Offset = "0x67B5660", VA = "0x67B6660")]
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
	[Address(RVA = "0x67B68E0", Offset = "0x67B58E0", VA = "0x67B68E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x67B6B60", Offset = "0x67B5B60", VA = "0x67B6B60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x67AB820", Offset = "0x67AA820", VA = "0x67AB820")]
	public static bool operator ==(Member a, Member b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x67B6AC0", Offset = "0x67B5AC0", VA = "0x67B6AC0")]
	public static bool operator !=(Member a, Member b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x67B6C60", Offset = "0x67B5C60", VA = "0x67B6C60")]
	public string ToUniqueString()
	{
		return null;
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x67B6D80", Offset = "0x67B5D80", VA = "0x67B6D80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x67B6E00", Offset = "0x67B5E00", VA = "0x67B6E00")]
	public Member ToDeclarer()
	{
		return null;
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x67B6EC0", Offset = "0x67B5EC0", VA = "0x67B6EC0")]
	public Member ToPseudoDeclarer()
	{
		return null;
	}
}
