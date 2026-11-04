// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Cloning
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2D9D910", Offset = "0x2D9BF10", VA = "0x182D9D910")]
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
		[Address(RVA = "0x2D9D8C0", Offset = "0x2D9BEC0", VA = "0x182D9D8C0")]
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
		[Address(RVA = "0x2D9D960", Offset = "0x2D9BF60", VA = "0x182D9D960")]
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
		[Address(RVA = "0x2D9D9B0", Offset = "0x2D9BFB0", VA = "0x182D9D9B0")]
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
		[Address(RVA = "0x2D9DAF0", Offset = "0x2D9C0F0", VA = "0x182D9DAF0")]
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
		[Address(RVA = "0x2D9D870", Offset = "0x2D9BE70", VA = "0x182D9D870")]
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
		[Address(RVA = "0x2D9DAA0", Offset = "0x2D9C0A0", VA = "0x182D9DAA0")]
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
		[Address(RVA = "0x2D9DA50", Offset = "0x2D9C050", VA = "0x182D9DA50")]
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
		[Address(RVA = "0x2D9DA00", Offset = "0x2D9C000", VA = "0x182D9DA00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x2D9CFB0", Offset = "0x2D9B5B0", VA = "0x182D9CFB0")]
	static Cloning()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2D9C760", Offset = "0x2D9AD60", VA = "0x182D9C760")]
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
	[Address(RVA = "0x2D9C6D0", Offset = "0x2D9ACD0", VA = "0x182D9C6D0")]
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
	[Address(RVA = "0x2D9C9D0", Offset = "0x2D9AFD0", VA = "0x182D9C9D0")]
	internal static object Clone(CloningContext context, object original)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2D9C3A0", Offset = "0x2D9A9A0", VA = "0x182D9C3A0")]
	internal static void CloneInto(CloningContext context, ref object clone, object original)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2D9CA40", Offset = "0x2D9B040", VA = "0x182D9CA40")]
	[CanBeNull]
	public static ICloner GetCloner(object original, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2D9CBC0", Offset = "0x2D9B1C0", VA = "0x182D9CBC0")]
	private static ICloner GetCloner(object original, Type type, ICloner fallbackCloner)
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2D9CDC0", Offset = "0x2D9B3C0", VA = "0x182D9CDC0")]
	private static bool Skippable(Type type)
	{
		return default(bool);
	}
}
