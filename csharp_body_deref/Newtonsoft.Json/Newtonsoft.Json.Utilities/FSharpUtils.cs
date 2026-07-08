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
		[Address(RVA = "0x3AC3D90", Offset = "0x3AC3D90", VA = "0x3AC3D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public Assembly FSharpCoreAssembly
	{
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x3AC3E00", Offset = "0x3AC3E00", VA = "0x3AC3E00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x3AC3E10", Offset = "0x3AC3E10", VA = "0x3AC3E10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CB")]
	public MethodCall<object?, object> IsUnion
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x3AC3E20", Offset = "0x3AC3E20", VA = "0x3AC3E20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x3AC3E30", Offset = "0x3AC3E30", VA = "0x3AC3E30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	public MethodCall<object?, object> GetUnionCases
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x3AC3E40", Offset = "0x3AC3E40", VA = "0x3AC3E40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x3AC3E50", Offset = "0x3AC3E50", VA = "0x3AC3E50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CD")]
	public MethodCall<object?, object> PreComputeUnionTagReader
	{
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x3AC3E60", Offset = "0x3AC3E60", VA = "0x3AC3E60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x3AC3E70", Offset = "0x3AC3E70", VA = "0x3AC3E70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CE")]
	public MethodCall<object?, object> PreComputeUnionReader
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x3AC3E80", Offset = "0x3AC3E80", VA = "0x3AC3E80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x3AC3E90", Offset = "0x3AC3E90", VA = "0x3AC3E90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	public MethodCall<object?, object> PreComputeUnionConstructor
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x3AC3EA0", Offset = "0x3AC3EA0", VA = "0x3AC3EA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x3AC3EB0", Offset = "0x3AC3EB0", VA = "0x3AC3EB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D0")]
	public Func<object, object> GetUnionCaseInfoDeclaringType
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x3AC3EC0", Offset = "0x3AC3EC0", VA = "0x3AC3EC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x3AC3ED0", Offset = "0x3AC3ED0", VA = "0x3AC3ED0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public Func<object, object> GetUnionCaseInfoName
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x3AC3EE0", Offset = "0x3AC3EE0", VA = "0x3AC3EE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x3AC3EF0", Offset = "0x3AC3EF0", VA = "0x3AC3EF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public Func<object, object> GetUnionCaseInfoTag
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x3AC3F00", Offset = "0x3AC3F00", VA = "0x3AC3F00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x3AC3F10", Offset = "0x3AC3F10", VA = "0x3AC3F10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public MethodCall<object, object?> GetUnionCaseInfoFields
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x3AC3F20", Offset = "0x3AC3F20", VA = "0x3AC3F20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000623")]
		[Address(RVA = "0x3AC3F30", Offset = "0x3AC3F30", VA = "0x3AC3F30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x3AC3530", Offset = "0x3AC3530", VA = "0x3AC3530")]
	private FSharpUtils(Assembly fsharpCoreAssembly)
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x3AC3F40", Offset = "0x3AC3F40", VA = "0x3AC3F40")]
	public static void EnsureInitialized(Assembly fsharpCoreAssembly)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x3AC3AF0", Offset = "0x3AC3AF0", VA = "0x3AC3AF0")]
	private static MethodInfo GetMethodWithNonPublicFallback(Type type, string methodName, BindingFlags bindingFlags)
	{
		return null;
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x3AC3B60", Offset = "0x3AC3B60", VA = "0x3AC3B60")]
	private static MethodCall<object, object> CreateFSharpFuncCall(Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x3AC40F0", Offset = "0x3AC40F0", VA = "0x3AC40F0")]
	public ObjectConstructor<object> CreateSeq(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x3AC4200", Offset = "0x3AC4200", VA = "0x3AC4200")]
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
