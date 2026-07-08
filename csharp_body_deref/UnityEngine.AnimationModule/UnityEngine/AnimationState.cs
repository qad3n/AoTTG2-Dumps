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
		[Address(RVA = "0x4A7AF10", Offset = "0x4A7AF10", VA = "0x4A7AF10")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4A7AF40", Offset = "0x4A7AF40", VA = "0x4A7AF40")]
		set;
	}

	[Token(Token = "0x17000005")]
	public extern float normalizedTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4A7AF90", Offset = "0x4A7AF90", VA = "0x4A7AF90")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4A7AFC0", Offset = "0x4A7AFC0", VA = "0x4A7AFC0")]
		set;
	}

	[Token(Token = "0x17000006")]
	public extern float speed
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4A7B010", Offset = "0x4A7B010", VA = "0x4A7B010")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4A7B040", Offset = "0x4A7B040", VA = "0x4A7B040")]
		set;
	}

	[Token(Token = "0x17000007")]
	public extern float length
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4A7B090", Offset = "0x4A7B090", VA = "0x4A7B090")]
		get;
	}

	[Token(Token = "0x17000008")]
	public extern int layer
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4A7B0C0", Offset = "0x4A7B0C0", VA = "0x4A7B0C0")]
		set;
	}

	[Token(Token = "0x17000009")]
	public extern AnimationClip clip
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4A7B100", Offset = "0x4A7B100", VA = "0x4A7B100")]
		get;
	}

	[Token(Token = "0x1700000A")]
	public extern string name
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4A7B130", Offset = "0x4A7B130", VA = "0x4A7B130")]
		get;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4A7B160", Offset = "0x4A7B160", VA = "0x4A7B160")]
	public AnimationState()
	{
	}
}
