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
		[Address(RVA = "0x3DB96E0", Offset = "0x3DB96E0", VA = "0x3DB96E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public Assembly FSharpCoreAssembly
	{
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x3DB9750", Offset = "0x3DB9750", VA = "0x3DB9750")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x3DB9760", Offset = "0x3DB9760", VA = "0x3DB9760")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CB")]
	public MethodCall<object?, object> IsUnion
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x3DB9770", Offset = "0x3DB9770", VA = "0x3DB9770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x3DB9780", Offset = "0x3DB9780", VA = "0x3DB9780")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	public MethodCall<object?, object> GetUnionCases
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x3DB9790", Offset = "0x3DB9790", VA = "0x3DB9790")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x3DB97A0", Offset = "0x3DB97A0", VA = "0x3DB97A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CD")]
	public MethodCall<object?, object> PreComputeUnionTagReader
	{
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x3DB97B0", Offset = "0x3DB97B0", VA = "0x3DB97B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x3DB97C0", Offset = "0x3DB97C0", VA = "0x3DB97C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CE")]
	public MethodCall<object?, object> PreComputeUnionReader
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x3DB97D0", Offset = "0x3DB97D0", VA = "0x3DB97D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x3DB97E0", Offset = "0x3DB97E0", VA = "0x3DB97E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	public MethodCall<object?, object> PreComputeUnionConstructor
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x3DB97F0", Offset = "0x3DB97F0", VA = "0x3DB97F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x3DB9800", Offset = "0x3DB9800", VA = "0x3DB9800")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D0")]
	public Func<object, object> GetUnionCaseInfoDeclaringType
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x3DB9810", Offset = "0x3DB9810", VA = "0x3DB9810")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x3DB9820", Offset = "0x3DB9820", VA = "0x3DB9820")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public Func<object, object> GetUnionCaseInfoName
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x3DB9830", Offset = "0x3DB9830", VA = "0x3DB9830")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x3DB9840", Offset = "0x3DB9840", VA = "0x3DB9840")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public Func<object, object> GetUnionCaseInfoTag
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x3DB9850", Offset = "0x3DB9850", VA = "0x3DB9850")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x3DB9860", Offset = "0x3DB9860", VA = "0x3DB9860")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public MethodCall<object, object?> GetUnionCaseInfoFields
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x3DB9870", Offset = "0x3DB9870", VA = "0x3DB9870")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000623")]
		[Address(RVA = "0x3DB9880", Offset = "0x3DB9880", VA = "0x3DB9880")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x3DB8E80", Offset = "0x3DB8E80", VA = "0x3DB8E80")]
	private FSharpUtils(Assembly fsharpCoreAssembly)
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x3DB9890", Offset = "0x3DB9890", VA = "0x3DB9890")]
	public static void EnsureInitialized(Assembly fsharpCoreAssembly)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x3DB9440", Offset = "0x3DB9440", VA = "0x3DB9440")]
	private static MethodInfo GetMethodWithNonPublicFallback(Type type, string methodName, BindingFlags bindingFlags)
	{
		return null;
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x3DB94B0", Offset = "0x3DB94B0", VA = "0x3DB94B0")]
	private static MethodCall<object, object> CreateFSharpFuncCall(Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x3DB9A40", Offset = "0x3DB9A40", VA = "0x3DB9A40")]
	public ObjectConstructor<object> CreateSeq(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x3DB9B50", Offset = "0x3DB9B50", VA = "0x3DB9B50")]
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
