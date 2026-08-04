// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimationState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000A")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/AnimationState.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class AnimationState : TrackedReference
{
	[Token(Token = "0x17000004")]
	public extern float weight
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4DA2730", Offset = "0x4DA2730", VA = "0x4DA2730")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4DA2760", Offset = "0x4DA2760", VA = "0x4DA2760")]
		set;
	}

	[Token(Token = "0x17000005")]
	public extern float normalizedTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4DA27B0", Offset = "0x4DA27B0", VA = "0x4DA27B0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4DA27E0", Offset = "0x4DA27E0", VA = "0x4DA27E0")]
		set;
	}

	[Token(Token = "0x17000006")]
	public extern float speed
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4DA2830", Offset = "0x4DA2830", VA = "0x4DA2830")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4DA2860", Offset = "0x4DA2860", VA = "0x4DA2860")]
		set;
	}

	[Token(Token = "0x17000007")]
	public extern float length
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4DA28B0", Offset = "0x4DA28B0", VA = "0x4DA28B0")]
		get;
	}

	[Token(Token = "0x17000008")]
	public extern int layer
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4DA28E0", Offset = "0x4DA28E0", VA = "0x4DA28E0")]
		set;
	}

	[Token(Token = "0x17000009")]
	public extern AnimationClip clip
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4DA2920", Offset = "0x4DA2920", VA = "0x4DA2920")]
		get;
	}

	[Token(Token = "0x1700000A")]
	public extern string name
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4DA2950", Offset = "0x4DA2950", VA = "0x4DA2950")]
		get;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4DA2980", Offset = "0x4DA2980", VA = "0x4DA2980")]
	public AnimationState()
	{
	}
}
