// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.ContinuationQueue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000229")]
internal sealed class ContinuationQueue
{
	[Token(Token = "0x4000645")]
	private const int MaxArrayLength = 2146435071;

	[Token(Token = "0x4000646")]
	private const int InitialSize = 16;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x10")]
	private readonly PlayerLoopTiming timing;

	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0x14")]
	private SpinLock gate;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x18")]
	private bool dequing;

	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0x1C")]
	private int actionListCount;

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0x20")]
	private Action[] actionList;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x28")]
	private int waitingListCount;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x30")]
	private Action[] waitingList;

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x4A18E60", Offset = "0x4A18E60", VA = "0x4A18E60")]
	public ContinuationQueue(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x4A18F10", Offset = "0x4A18F10", VA = "0x4A18F10")]
	public void Enqueue(Action continuation)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x4A19200", Offset = "0x4A19200", VA = "0x4A19200")]
	public int Clear()
	{
		return default(int);
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x4A19290", Offset = "0x4A19290", VA = "0x4A19290")]
	public void Run()
	{
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x4A19630", Offset = "0x4A19630", VA = "0x4A19630")]
	private void Initialization()
	{
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x4A19640", Offset = "0x4A19640", VA = "0x4A19640")]
	private void LastInitialization()
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x4A19650", Offset = "0x4A19650", VA = "0x4A19650")]
	private void EarlyUpdate()
	{
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x4A19660", Offset = "0x4A19660", VA = "0x4A19660")]
	private void LastEarlyUpdate()
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x4A19670", Offset = "0x4A19670", VA = "0x4A19670")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x4A19680", Offset = "0x4A19680", VA = "0x4A19680")]
	private void LastFixedUpdate()
	{
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x4A19690", Offset = "0x4A19690", VA = "0x4A19690")]
	private void PreUpdate()
	{
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x4A196A0", Offset = "0x4A196A0", VA = "0x4A196A0")]
	private void LastPreUpdate()
	{
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x4A196B0", Offset = "0x4A196B0", VA = "0x4A196B0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x4A196C0", Offset = "0x4A196C0", VA = "0x4A196C0")]
	private void LastUpdate()
	{
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x4A196D0", Offset = "0x4A196D0", VA = "0x4A196D0")]
	private void PreLateUpdate()
	{
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x4A196E0", Offset = "0x4A196E0", VA = "0x4A196E0")]
	private void LastPreLateUpdate()
	{
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x4A196F0", Offset = "0x4A196F0", VA = "0x4A196F0")]
	private void PostLateUpdate()
	{
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x4A19700", Offset = "0x4A19700", VA = "0x4A19700")]
	private void LastPostLateUpdate()
	{
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x4A19710", Offset = "0x4A19710", VA = "0x4A19710")]
	private void TimeUpdate()
	{
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x4A19720", Offset = "0x4A19720", VA = "0x4A19720")]
	private void LastTimeUpdate()
	{
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x4A192A0", Offset = "0x4A192A0", VA = "0x4A192A0")]
	[DebuggerHidden]
	private void RunCore()
	{
	}
}
