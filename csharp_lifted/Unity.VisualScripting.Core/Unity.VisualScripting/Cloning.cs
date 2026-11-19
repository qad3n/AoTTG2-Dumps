// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Cloning
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace Unity.VisualScripting;

[Token(Token = "0x200000E")]
public static class Cloning
{
	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, bool> skippable;

	[Token(Token = "0x17000002")]
	public static HashSet<ICloner> cloners
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x6791430", Offset = "0x6790430", VA = "0x6791430")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public static ArrayCloner arrayCloner
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x67914A0", Offset = "0x67904A0", VA = "0x67914A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public static DictionaryCloner dictionaryCloner
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x6791510", Offset = "0x6790510", VA = "0x6791510")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public static EnumerableCloner enumerableCloner
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x6791580", Offset = "0x6790580", VA = "0x6791580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public static ListCloner listCloner
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x67915F0", Offset = "0x67905F0", VA = "0x67915F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	public static AnimationCurveCloner animationCurveCloner
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x6791660", Offset = "0x6790660", VA = "0x6791660")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	internal static GradientCloner gradientCloner
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x67916D0", Offset = "0x67906D0", VA = "0x67916D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public static FieldsCloner fieldsCloner
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x6791740", Offset = "0x6790740", VA = "0x6791740")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public static FakeSerializationCloner fakeSerializationCloner
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x67917B0", Offset = "0x67907B0", VA = "0x67917B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x6790BE0", Offset = "0x678FBE0", VA = "0x6790BE0")]
	static Cloning()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x6791820", Offset = "0x6790820", VA = "0x6791820")]
	public static object Clone(this object original, ICloner fallbackCloner, bool tryPreserveInstances)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	public static T Clone<T>(this T original, ICloner fallbackCloner, bool tryPreserveInstances)
	{
		return (T)null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x6791B60", Offset = "0x6790B60", VA = "0x6791B60")]
	public static object CloneViaFakeSerialization(this object original)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	public static T CloneViaFakeSerialization<T>(this T original)
	{
		return (T)null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x678DBD0", Offset = "0x678CBD0", VA = "0x678DBD0")]
	internal static object Clone(CloningContext context, object original)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x678F700", Offset = "0x678E700", VA = "0x678F700")]
	internal static void CloneInto(CloningContext context, ref object clone, object original)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x6791F70", Offset = "0x6790F70", VA = "0x6791F70")]
	[CanBeNull]
	public static ICloner GetCloner(object original, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x6791E10", Offset = "0x6790E10", VA = "0x6791E10")]
	private static ICloner GetCloner(object original, Type type, ICloner fallbackCloner)
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6791C20", Offset = "0x6790C20", VA = "0x6791C20")]
	private static bool Skippable(Type type)
	{
		return default(bool);
	}
}
