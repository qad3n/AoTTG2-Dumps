// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalCameraHistory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001CE")]
public class UniversalCameraHistory : ICameraHistoryReadAccess, ICameraHistoryWriteAccess, IPerFrameHistoryAccessTracker, IDisposable
{
	[Token(Token = "0x20001CF")]
	private static class TypeId<T>
	{
		[Token(Token = "0x4000A0D")]
		[FieldOffset(Offset = "0x0")]
		public static uint value;
	}

	[Token(Token = "0x20001D0")]
	private struct Item
	{
		[Token(Token = "0x4000A0E")]
		[FieldOffset(Offset = "0x0")]
		public ContextItem storage;

		[Token(Token = "0x4000A0F")]
		[FieldOffset(Offset = "0x8")]
		public int requestVersion;

		[Token(Token = "0x4000A10")]
		[FieldOffset(Offset = "0xC")]
		public int writeVersion;

		[Token(Token = "0x6000A19")]
		[Address(RVA = "0x66A0010", Offset = "0x669F010", VA = "0x66A0010")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000A07")]
	private const int k_ValidVersionCount = 2;

	[Token(Token = "0x4000A08")]
	[FieldOffset(Offset = "0x0")]
	private static uint s_TypeCount;

	[Token(Token = "0x4000A09")]
	[FieldOffset(Offset = "0x10")]
	private Item[] m_Items;

	[Token(Token = "0x4000A0A")]
	[FieldOffset(Offset = "0x18")]
	private int m_Version;

	[Token(Token = "0x4000A0B")]
	[FieldOffset(Offset = "0x20")]
	private BufferedRTHandleSystem m_HistoryTextures;

	[Token(Token = "0x4000A0C")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private ICameraHistoryReadAccess.HistoryRequestDelegate m_OnGatherHistoryRequests;

	[Token(Token = "0x14000006")]
	public event ICameraHistoryReadAccess.HistoryRequestDelegate OnGatherHistoryRequests
	{
		[Token(Token = "0x6000A0F")]
		[Address(RVA = "0x669FEF0", Offset = "0x669EEF0", VA = "0x669FEF0", Slot = "5")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000A10")]
		[Address(RVA = "0x669FF80", Offset = "0x669EF80", VA = "0x669FF80", Slot = "6")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000A0A")]
	public void RequestAccess<Type>() where Type : ContextItem
	{
	}

	[Token(Token = "0x6000A0B")]
	public Type GetHistoryForRead<Type>() where Type : ContextItem
	{
		return null;
	}

	[Token(Token = "0x6000A0C")]
	public bool IsAccessRequested<Type>() where Type : ContextItem
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0D")]
	public Type GetHistoryForWrite<Type>() where Type : ContextItem, new()
	{
		return null;
	}

	[Token(Token = "0x6000A0E")]
	public bool IsWritten<Type>() where Type : ContextItem
	{
		return default(bool);
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x669F540", Offset = "0x669E540", VA = "0x669F540")]
	internal UniversalCameraHistory()
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x669F440", Offset = "0x669E440", VA = "0x669F440", Slot = "11")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x66A0040", Offset = "0x669F040", VA = "0x66A0040")]
	internal void GatherHistoryRequests()
	{
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x66A0060", Offset = "0x669F060", VA = "0x66A0060")]
	private bool IsValidRequest(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x66A0090", Offset = "0x669F090", VA = "0x66A0090")]
	private bool IsValid(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x66A00C0", Offset = "0x669F0C0", VA = "0x66A00C0")]
	internal void ReleaseUnusedHistory()
	{
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x66A0170", Offset = "0x669F170", VA = "0x66A0170")]
	internal void SwapAndSetReferenceSize(int cameraWidth, int cameraHeight)
	{
	}
}
