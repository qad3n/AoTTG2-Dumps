using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Jobs;

[Token(Token = "0x20001B6")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Transform/ScriptBindings/TransformAccess.bindings.h", CodegenOptions = UnityEngine.Bindings.CodegenOptions.Custom)]
public struct TransformAccessArray : IDisposable
{
	[Token(Token = "0x4000630")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr m_TransformArray;

	[Token(Token = "0x1700023F")]
	public bool isCreated
	{
		[Token(Token = "0x6000CC5")]
		[Address(RVA = "0x4AE75F0", Offset = "0x4AE75F0", VA = "0x4AE75F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000240")]
	public Transform this[int index]
	{
		[Token(Token = "0x6000CC7")]
		[Address(RVA = "0x4AE7680", Offset = "0x4AE7680", VA = "0x4AE7680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000241")]
	public int length
	{
		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x4AE7700", Offset = "0x4AE7700", VA = "0x4AE7700")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x4AE7510", Offset = "0x4AE7510", VA = "0x4AE7510")]
	public TransformAccessArray(int capacity, int desiredJobCount = -1)
	{
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x4AE7560", Offset = "0x4AE7560", VA = "0x4AE7560")]
	public static void Allocate(int capacity, int desiredJobCount, out TransformAccessArray array)
	{
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x4AE7600", Offset = "0x4AE7600", VA = "0x4AE7600", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x4AE7760", Offset = "0x4AE7760", VA = "0x4AE7760")]
	public void Add(Transform transform)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x4AE75B0", Offset = "0x4AE75B0", VA = "0x4AE75B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::Create", IsFreeFunction = true)]
	private static extern IntPtr Create(int capacity, int desiredJobCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x4AE7650", Offset = "0x4AE7650", VA = "0x4AE7650")]
	[UnityEngine.Bindings.NativeMethod(Name = "DestroyTransformAccessArray", IsFreeFunction = true)]
	private static extern void DestroyTransformAccessArray(IntPtr transformArray);

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x4AE7810", Offset = "0x4AE7810", VA = "0x4AE7810")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::AddTransform", IsFreeFunction = true)]
	private static void Add(IntPtr transformArrayIntPtr, Transform transform)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x4AE7730", Offset = "0x4AE7730", VA = "0x4AE7730")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetLength", IsFreeFunction = true)]
	internal static extern int GetLength(IntPtr transformArrayIntPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x4AE76C0", Offset = "0x4AE76C0", VA = "0x4AE76C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetTransform", IsFreeFunction = true, ThrowsException = true)]
	internal static extern Transform GetTransform(IntPtr transformArrayIntPtr, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x4AE78C0", Offset = "0x4AE78C0", VA = "0x4AE78C0")]
	private static extern void Add_Injected(IntPtr transformArrayIntPtr, IntPtr transform);
}
