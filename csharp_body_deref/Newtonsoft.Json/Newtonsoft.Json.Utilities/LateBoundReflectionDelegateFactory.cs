// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000D5")]
internal class LateBoundReflectionDelegateFactory : ReflectionDelegateFactory
{
	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly LateBoundReflectionDelegateFactory _instance;

	[Token(Token = "0x170000D7")]
	internal static ReflectionDelegateFactory Instance
	{
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x1C2A5C0", Offset = "0x1C28BC0", VA = "0x181C2A5C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x1C2A3B0", Offset = "0x1C289B0", VA = "0x181C2A3B0", Slot = "5")]
	public override ObjectConstructor<object> CreateParameterizedConstructor(MethodBase method)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	public override MethodCall<T, object> CreateMethodCall<T>(MethodBase method)
	{
		return null;
	}

	[Token(Token = "0x6000661")]
	public override Func<T> CreateDefaultConstructor<T>(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	public override Func<T, object> CreateGet<T>(PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x6000663")]
	public override Func<T, object> CreateGet<T>(FieldInfo fieldInfo)
	{
		return null;
	}

	[Token(Token = "0x6000664")]
	public override Action<T, object> CreateSet<T>(FieldInfo fieldInfo)
	{
		return null;
	}

	[Token(Token = "0x6000665")]
	public override Action<T, object> CreateSet<T>(PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public LateBoundReflectionDelegateFactory()
	{
	}
}
