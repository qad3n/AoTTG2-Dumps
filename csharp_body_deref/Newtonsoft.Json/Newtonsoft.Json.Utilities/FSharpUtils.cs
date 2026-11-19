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
		[Address(RVA = "0x55B2E40", Offset = "0x55B1E40", VA = "0x55B2E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public Assembly FSharpCoreAssembly
	{
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x55B2EB0", Offset = "0x55B1EB0", VA = "0x55B2EB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x55B2EC0", Offset = "0x55B1EC0", VA = "0x55B2EC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CB")]
	public MethodCall<object?, object> IsUnion
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x55B2ED0", Offset = "0x55B1ED0", VA = "0x55B2ED0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x55B2EE0", Offset = "0x55B1EE0", VA = "0x55B2EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	public MethodCall<object?, object> GetUnionCases
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x55B2EF0", Offset = "0x55B1EF0", VA = "0x55B2EF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x55B2F00", Offset = "0x55B1F00", VA = "0x55B2F00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CD")]
	public MethodCall<object?, object> PreComputeUnionTagReader
	{
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x55B2F10", Offset = "0x55B1F10", VA = "0x55B2F10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x55B2F20", Offset = "0x55B1F20", VA = "0x55B2F20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CE")]
	public MethodCall<object?, object> PreComputeUnionReader
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x55B2F30", Offset = "0x55B1F30", VA = "0x55B2F30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x55B2F40", Offset = "0x55B1F40", VA = "0x55B2F40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	public MethodCall<object?, object> PreComputeUnionConstructor
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x55B2F50", Offset = "0x55B1F50", VA = "0x55B2F50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x55B2F60", Offset = "0x55B1F60", VA = "0x55B2F60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D0")]
	public Func<object, object> GetUnionCaseInfoDeclaringType
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x55B2F70", Offset = "0x55B1F70", VA = "0x55B2F70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x55B2F80", Offset = "0x55B1F80", VA = "0x55B2F80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public Func<object, object> GetUnionCaseInfoName
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x55B2F90", Offset = "0x55B1F90", VA = "0x55B2F90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x55B2FA0", Offset = "0x55B1FA0", VA = "0x55B2FA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public Func<object, object> GetUnionCaseInfoTag
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x55B2FB0", Offset = "0x55B1FB0", VA = "0x55B2FB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x55B2FC0", Offset = "0x55B1FC0", VA = "0x55B2FC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public MethodCall<object, object?> GetUnionCaseInfoFields
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x55B2FD0", Offset = "0x55B1FD0", VA = "0x55B2FD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000623")]
		[Address(RVA = "0x55B2FE0", Offset = "0x55B1FE0", VA = "0x55B2FE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x55B25E0", Offset = "0x55B15E0", VA = "0x55B25E0")]
	private FSharpUtils(Assembly fsharpCoreAssembly)
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x55B2FF0", Offset = "0x55B1FF0", VA = "0x55B2FF0")]
	public static void EnsureInitialized(Assembly fsharpCoreAssembly)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x55B2BA0", Offset = "0x55B1BA0", VA = "0x55B2BA0")]
	private static MethodInfo GetMethodWithNonPublicFallback(Type type, string methodName, BindingFlags bindingFlags)
	{
		return null;
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x55B2C10", Offset = "0x55B1C10", VA = "0x55B2C10")]
	private static MethodCall<object, object> CreateFSharpFuncCall(Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x55B31A0", Offset = "0x55B21A0", VA = "0x55B31A0")]
	public ObjectConstructor<object> CreateSeq(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x55B32B0", Offset = "0x55B22B0", VA = "0x55B32B0")]
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
