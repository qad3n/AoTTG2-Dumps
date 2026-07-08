using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace Unity.VisualScripting;

[Token(Token = "0x200000E")]
public static class Cloning
{
	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, bool> skippable;

	[Token(Token = "0x17000002")]
	public static HashSet<ICloner> cloners
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x497D410", Offset = "0x497D410", VA = "0x497D410")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public static ArrayCloner arrayCloner
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x497D480", Offset = "0x497D480", VA = "0x497D480")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public static DictionaryCloner dictionaryCloner
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x497D4F0", Offset = "0x497D4F0", VA = "0x497D4F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public static EnumerableCloner enumerableCloner
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x497D560", Offset = "0x497D560", VA = "0x497D560")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public static ListCloner listCloner
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x497D5D0", Offset = "0x497D5D0", VA = "0x497D5D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	public static AnimationCurveCloner animationCurveCloner
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x497D640", Offset = "0x497D640", VA = "0x497D640")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public static FieldsCloner fieldsCloner
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x497D6B0", Offset = "0x497D6B0", VA = "0x497D6B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public static FakeSerializationCloner fakeSerializationCloner
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x497D720", Offset = "0x497D720", VA = "0x497D720")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x497CCD0", Offset = "0x497CCD0", VA = "0x497CCD0")]
	static Cloning()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x497D790", Offset = "0x497D790", VA = "0x497D790")]
	public static object Clone(this object original, ICloner fallbackCloner, bool tryPreserveInstances)
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	public static T Clone<T>(this T original, ICloner fallbackCloner, bool tryPreserveInstances)
	{
		return (T)null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x497DB40", Offset = "0x497DB40", VA = "0x497DB40")]
	public static object CloneViaFakeSerialization(this object original)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	public static T CloneViaFakeSerialization<T>(this T original)
	{
		return (T)null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4979D20", Offset = "0x4979D20", VA = "0x4979D20")]
	internal static object Clone(CloningContext context, object original)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x497B740", Offset = "0x497B740", VA = "0x497B740")]
	internal static void CloneInto(CloningContext context, ref object clone, object original)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x497DF50", Offset = "0x497DF50", VA = "0x497DF50")]
	[CanBeNull]
	public static ICloner GetCloner(object original, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x497DDF0", Offset = "0x497DDF0", VA = "0x497DDF0")]
	private static ICloner GetCloner(object original, Type type, ICloner fallbackCloner)
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x497DC00", Offset = "0x497DC00", VA = "0x497DC00")]
	private static bool Skippable(Type type)
	{
		return default(bool);
	}
}
