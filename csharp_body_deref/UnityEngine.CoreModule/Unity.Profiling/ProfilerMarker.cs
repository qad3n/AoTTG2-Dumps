// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.ProfilerMarker
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Profiling.LowLevel;
using UnityEngine.Scripting;

namespace Unity.Profiling;

[Token(Token = "0x2000027")]
[UnityEngine.Scripting.UsedByNativeCode]
[IgnoredByDeepProfiler]
public struct ProfilerMarker
{
	[Token(Token = "0x2000028")]
	[IgnoredByDeepProfiler]
	[UnityEngine.Scripting.UsedByNativeCode]
	public struct AutoScope : IDisposable
	{
		[Token(Token = "0x4000049")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal readonly IntPtr m_Ptr;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x2EBB9C0", Offset = "0x2EB9FC0", VA = "0x182EBB9C0")]
		internal AutoScope(IntPtr markerPtr)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x2EBB970", Offset = "0x2EB9F70", VA = "0x182EBB970", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal readonly IntPtr m_Ptr;

	[Token(Token = "0x1700000A")]
	public IntPtr Handle
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(IntPtr);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2ECE000", Offset = "0x2ECC600", VA = "0x182ECE000")]
	public ProfilerMarker(string name)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2ECDFD0", Offset = "0x2ECC5D0", VA = "0x182ECDFD0")]
	public ProfilerMarker(ProfilerCategory category, string name)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2ECDF90", Offset = "0x2ECC590", VA = "0x182ECDF90")]
	public ProfilerMarker(ProfilerCategory category, string name, MarkerFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2ECDF50", Offset = "0x2ECC550", VA = "0x182ECDF50")]
	[Pure]
	public AutoScope Auto()
	{
		return default(AutoScope);
	}
}
