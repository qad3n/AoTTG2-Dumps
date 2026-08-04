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
	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, bool> skippable;

	[Token(Token = "0x17000002")]
	public static HashSet<ICloner> cloners
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4CA1FE0", Offset = "0x4CA1FE0", VA = "0x4CA1FE0")]
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
		[Address(RVA = "0x4CA2050", Offset = "0x4CA2050", VA = "0x4CA2050")]
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
		[Address(RVA = "0x4CA20C0", Offset = "0x4CA20C0", VA = "0x4CA20C0")]
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
		[Address(RVA = "0x4CA2130", Offset = "0x4CA2130", VA = "0x4CA2130")]
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
		[Address(RVA = "0x4CA21A0", Offset = "0x4CA21A0", VA = "0x4CA21A0")]
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
		[Address(RVA = "0x4CA2210", Offset = "0x4CA2210", VA = "0x4CA2210")]
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
		[Address(RVA = "0x4CA2280", Offset = "0x4CA2280", VA = "0x4CA2280")]
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
		[Address(RVA = "0x4CA22F0", Offset = "0x4CA22F0", VA = "0x4CA22F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4CA18A0", Offset = "0x4CA18A0", VA = "0x4CA18A0")]
	static Cloning()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4CA2360", Offset = "0x4CA2360", VA = "0x4CA2360")]
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
	[Address(RVA = "0x4CA2710", Offset = "0x4CA2710", VA = "0x4CA2710")]
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
	[Address(RVA = "0x4C9E8F0", Offset = "0x4C9E8F0", VA = "0x4C9E8F0")]
	internal static object Clone(CloningContext context, object original)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4CA0310", Offset = "0x4CA0310", VA = "0x4CA0310")]
	internal static void CloneInto(CloningContext context, ref object clone, object original)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4CA2B20", Offset = "0x4CA2B20", VA = "0x4CA2B20")]
	[CanBeNull]
	public static ICloner GetCloner(object original, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4CA29C0", Offset = "0x4CA29C0", VA = "0x4CA29C0")]
	private static ICloner GetCloner(object original, Type type, ICloner fallbackCloner)
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4CA27D0", Offset = "0x4CA27D0", VA = "0x4CA27D0")]
	private static bool Skippable(Type type)
	{
		return default(bool);
	}
}
