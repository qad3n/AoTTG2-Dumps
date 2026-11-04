// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.FSharpUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000C6")]
internal class FSharpUtils
{
	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object Lock;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x8")]
	private static FSharpUtils? _instance;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x10")]
	private MethodInfo _ofSeq;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x18")]
	private Type _mapType;

	[Token(Token = "0x4000459")]
	public const string FSharpSetTypeName = "FSharpSet`1";

	[Token(Token = "0x400045A")]
	public const string FSharpListTypeName = "FSharpList`1";

	[Token(Token = "0x400045B")]
	public const string FSharpMapTypeName = "FSharpMap`2";

	[Token(Token = "0x170000C9")]
	public static FSharpUtils Instance
	{
		[Token(Token = "0x600060F")]
		[Address(RVA = "0x1C26130", Offset = "0x1C24730", VA = "0x181C26130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public Assembly FSharpCoreAssembly
	{
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000611")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CB")]
	public MethodCall<object?, object> IsUnion
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	public MethodCall<object?, object> GetUnionCases
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CD")]
	public MethodCall<object?, object> PreComputeUnionTagReader
	{
		[Token(Token = "0x6000616")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CE")]
	public MethodCall<object?, object> PreComputeUnionReader
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000619")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	public MethodCall<object?, object> PreComputeUnionConstructor
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061B")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D0")]
	public Func<object, object> GetUnionCaseInfoDeclaringType
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public Func<object, object> GetUnionCaseInfoName
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061F")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public Func<object, object> GetUnionCaseInfoTag
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public MethodCall<object, object?> GetUnionCaseInfoFields
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000623")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x1C25BB0", Offset = "0x1C241B0", VA = "0x181C25BB0")]
	private FSharpUtils(Assembly fsharpCoreAssembly)
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x1C25930", Offset = "0x1C23F30", VA = "0x181C25930")]
	public static void EnsureInitialized(Assembly fsharpCoreAssembly)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x1C25AB0", Offset = "0x1C240B0", VA = "0x181C25AB0")]
	private static MethodInfo GetMethodWithNonPublicFallback(Type type, string methodName, BindingFlags bindingFlags)
	{
		return null;
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x1C25420", Offset = "0x1C23A20", VA = "0x181C25420")]
	private static MethodCall<object, object> CreateFSharpFuncCall(Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x1C25810", Offset = "0x1C23E10", VA = "0x181C25810")]
	public ObjectConstructor<object> CreateSeq(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x1C25650", Offset = "0x1C23C50", VA = "0x181C25650")]
	public ObjectConstructor<object> CreateMap(Type keyType, Type valueType)
	{
		return null;
	}

	[Token(Token = "0x6000629")]
	public ObjectConstructor<object?>? BuildMapCreator<TKey, TValue>()
	{
		return null;
	}
}
