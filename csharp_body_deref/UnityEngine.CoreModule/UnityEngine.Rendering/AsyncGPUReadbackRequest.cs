using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200029C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/AsyncGPUReadbackManaged.h")]
public struct AsyncGPUReadbackRequest
{
	[Token(Token = "0x40006E4")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40006E5")]
	[FieldOffset(Offset = "0x8")]
	internal int m_Version;

	[Token(Token = "0x1700025E")]
	public bool done
	{
		[Token(Token = "0x6000E10")]
		[Address(RVA = "0x4AF0A60", Offset = "0x4AF0A60", VA = "0x4AF0A60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025F")]
	public bool hasError
	{
		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x4AF0AC0", Offset = "0x4AF0AC0", VA = "0x4AF0AC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000260")]
	public int layerCount
	{
		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x4AF0B20", Offset = "0x4AF0B20", VA = "0x4AF0B20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000261")]
	public int layerDataSize
	{
		[Token(Token = "0x6000E13")]
		[Address(RVA = "0x4AF0B80", Offset = "0x4AF0B80", VA = "0x4AF0B80")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x4AF0A30", Offset = "0x4AF0A30", VA = "0x4AF0A30")]
	public extern void WaitForCompletion();

	[Token(Token = "0x6000E0F")]
	public NativeArray<T> GetData<T>(int layer = 0) where T : struct
	{
		return default(NativeArray<T>);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x4AF0A90", Offset = "0x4AF0A90", VA = "0x4AF0A90")]
	private extern bool IsDone();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x4AF0AF0", Offset = "0x4AF0AF0", VA = "0x4AF0AF0")]
	private extern bool HasError();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x4AF0B50", Offset = "0x4AF0B50", VA = "0x4AF0B50")]
	private extern int GetLayerCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x4AF0BB0", Offset = "0x4AF0BB0", VA = "0x4AF0BB0")]
	private extern int GetLayerDataSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x4AF0BE0", Offset = "0x4AF0BE0", VA = "0x4AF0BE0")]
	internal extern void SetScriptingCallback(Action<AsyncGPUReadbackRequest> callback);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x4AF0C20", Offset = "0x4AF0C20", VA = "0x4AF0C20")]
	private extern IntPtr GetDataRaw(int layer);
}
