// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.MethodInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004F1")]
public abstract class MethodInfo : MethodBase
{
	[Token(Token = "0x170004C8")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x60024AC")]
		[Address(RVA = "0x53DA630", Offset = "0x53D9630", VA = "0x53DA630", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004C9")]
	public virtual ParameterInfo ReturnParameter
	{
		[Token(Token = "0x60024AD")]
		[Address(RVA = "0x53DA640", Offset = "0x53D9640", VA = "0x53DA640", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CA")]
	public virtual Type ReturnType
	{
		[Token(Token = "0x60024AE")]
		[Address(RVA = "0x53DA670", Offset = "0x53D9670", VA = "0x53DA670", Slot = "41")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CB")]
	internal virtual int GenericParameterCount
	{
		[Token(Token = "0x60024B9")]
		[Address(RVA = "0x53DA850", Offset = "0x53D9850", VA = "0x53DA850", Slot = "47")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60024AB")]
	[Address(RVA = "0x53DA620", Offset = "0x53D9620", VA = "0x53DA620")]
	protected MethodInfo()
	{
	}

	[Token(Token = "0x60024AF")]
	[Address(RVA = "0x53DA6A0", Offset = "0x53D96A0", VA = "0x53DA6A0", Slot = "29")]
	public override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x60024B0")]
	[Address(RVA = "0x53DA6F0", Offset = "0x53D96F0", VA = "0x53DA6F0", Slot = "42")]
	public virtual MethodInfo GetGenericMethodDefinition()
	{
		return null;
	}

	[Token(Token = "0x60024B1")]
	[Address(RVA = "0x53DA740", Offset = "0x53D9740", VA = "0x53DA740", Slot = "43")]
	public virtual MethodInfo MakeGenericMethod(params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x60024B2")]
	public abstract MethodInfo GetBaseDefinition();

	[Token(Token = "0x60024B3")]
	[Address(RVA = "0x53DA790", Offset = "0x53D9790", VA = "0x53DA790", Slot = "45")]
	public virtual Delegate CreateDelegate(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x60024B4")]
	[Address(RVA = "0x53DA7E0", Offset = "0x53D97E0", VA = "0x53DA7E0", Slot = "46")]
	public virtual Delegate CreateDelegate(Type delegateType, object target)
	{
		return null;
	}

	[Token(Token = "0x60024B5")]
	[Address(RVA = "0x53DA830", Offset = "0x53D9830", VA = "0x53DA830", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60024B6")]
	[Address(RVA = "0x53DA840", Offset = "0x53D9840", VA = "0x53DA840", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024B7")]
	[Address(RVA = "0x53D9ED0", Offset = "0x53D8ED0", VA = "0x53D9ED0")]
	public static bool operator ==(MethodInfo left, MethodInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024B8")]
	[Address(RVA = "0x53D9EA0", Offset = "0x53D8EA0", VA = "0x53D9EA0")]
	public static bool operator !=(MethodInfo left, MethodInfo right)
	{
		return default(bool);
	}
}
