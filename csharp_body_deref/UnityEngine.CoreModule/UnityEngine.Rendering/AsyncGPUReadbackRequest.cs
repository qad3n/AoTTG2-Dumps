// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AsyncGPUReadbackRequest
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000316")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/AsyncGPUReadbackManaged.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture.h")]
public struct AsyncGPUReadbackRequest
{
	[Token(Token = "0x40007DC")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40007DD")]
	[FieldOffset(Offset = "0x8")]
	internal int m_Version;

	[Token(Token = "0x170002EC")]
	public bool done
	{
		[Token(Token = "0x600127C")]
		[Address(RVA = "0x2F2EE30", Offset = "0x2F2D430", VA = "0x182F2EE30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002ED")]
	public bool hasError
	{
		[Token(Token = "0x600127D")]
		[Address(RVA = "0x2F2EDC0", Offset = "0x2F2D3C0", VA = "0x182F2EDC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EE")]
	public int layerCount
	{
		[Token(Token = "0x600127E")]
		[Address(RVA = "0x2F2ED40", Offset = "0x2F2D340", VA = "0x182F2ED40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EF")]
	public int layerDataSize
	{
		[Token(Token = "0x600127F")]
		[Address(RVA = "0x2F2ED80", Offset = "0x2F2D380", VA = "0x182F2ED80")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600127A")]
	[Address(RVA = "0x2F2EEC0", Offset = "0x2F2D4C0", VA = "0x182F2EEC0")]
	public extern void WaitForCompletion();

	[Token(Token = "0x600127B")]
	public NativeArray<T> GetData<T>(int layer = 0) where T : struct
	{
		return default(NativeArray<T>);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001280")]
	[Address(RVA = "0x2F2EE30", Offset = "0x2F2D430", VA = "0x182F2EE30")]
	private extern bool IsDone();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001281")]
	[Address(RVA = "0x2F2EDC0", Offset = "0x2F2D3C0", VA = "0x182F2EDC0")]
	private extern bool HasError();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001282")]
	[Address(RVA = "0x2F2ED40", Offset = "0x2F2D340", VA = "0x182F2ED40")]
	private extern int GetLayerCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001283")]
	[Address(RVA = "0x2F2ED80", Offset = "0x2F2D380", VA = "0x182F2ED80")]
	private extern int GetLayerDataSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001284")]
	[Address(RVA = "0x2F2EE70", Offset = "0x2F2D470", VA = "0x182F2EE70")]
	internal extern void SetScriptingCallback(Action<AsyncGPUReadbackRequest> callback);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001285")]
	[Address(RVA = "0x2F2ED00", Offset = "0x2F2D300", VA = "0x182F2ED00")]
	private extern IntPtr GetDataRaw(int layer);

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x2F2EE00", Offset = "0x2F2D400", VA = "0x182F2EE00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeCallback(Action<AsyncGPUReadbackRequest> callback, AsyncGPUReadbackRequest obj)
	{
	}
}
