// ==================== AoTTG2 cross-reference ====================
// Type: Utility.RateLimit
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/RateLimit.c
// Prior real C# source (older reference): Assets/Scripts/Utility/RateLimit.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000931")]
internal class RateLimit
{
	[Token(Token = "0x4002E50")]
	[FieldOffset(Offset = "0x10")]
	private int _currentUsage;

	[Token(Token = "0x4002E51")]
	[FieldOffset(Offset = "0x14")]
	private int _maxUsage;

	[Token(Token = "0x4002E52")]
	[FieldOffset(Offset = "0x18")]
	private float _resetDelay;

	[Token(Token = "0x4002E53")]
	[FieldOffset(Offset = "0x1C")]
	private float _lastResetTime;

	[Token(Token = "0x60056B0")]
	[Address(RVA = "0x5CF0450", Offset = "0x5CEF450", VA = "0x5CF0450")]
	public RateLimit Copy()
	{
		// Lifted from source/cpp/Utility/RateLimit.c (Utility.RateLimit$$Copy): clean
		float fVar1;
		int iVar2;
		RateLimit __this_00;
		float fVar3;

		iVar2 = this._maxUsage;
		fVar1 = this._resetDelay;
		__this_00 = new RateLimit();
		__this_00._currentUsage = 0;
		fVar3 = Time.realtimeSinceStartup;
		__this_00._lastResetTime = fVar3;
		__this_00._maxUsage = iVar2;
		__this_00._resetDelay = fVar1;
		return __this_00;
	}

	[Token(Token = "0x60056B1")]
	[Address(RVA = "0x5CF04D0", Offset = "0x5CEF4D0", VA = "0x5CF04D0")]
	public RateLimit(int maxUsage, float resetDelay)
	{
		// Lifted from source/cpp/Utility/RateLimit.c (Utility.RateLimit$$.ctor): clean
		float fVar1;

		base();
		this._currentUsage = 0;
		fVar1 = Time.realtimeSinceStartup;
		this._lastResetTime = fVar1;
		this._maxUsage = maxUsage;
		this._resetDelay = resetDelay;
		return;
	}

	[Token(Token = "0x60056B2")]
	[Address(RVA = "0x5CF0510", Offset = "0x5CEF510", VA = "0x5CF0510")]
	public bool Peek(int usage = 1)
	{
		// Lifted from source/cpp/Utility/RateLimit.c (Utility.RateLimit$$Peek): clean
		float fVar1;

		fVar1 = Time.realtimeSinceStartup;
		if (this._lastResetTime + this._resetDelay <= fVar1) {
			this._currentUsage = 0;
			fVar1 = Time.realtimeSinceStartup;
			this._lastResetTime = fVar1;
		}
		return usage + this._currentUsage <= this._maxUsage;
	}

	[Token(Token = "0x60056B3")]
	[Address(RVA = "0x5CF0590", Offset = "0x5CEF590", VA = "0x5CF0590")]
	public bool Use(int usage = 1)
	{
		// Lifted from source/cpp/Utility/RateLimit.c (Utility.RateLimit$$Use): clean
		int iVar1;
		int iVar2;
		float fVar3;

		fVar3 = Time.realtimeSinceStartup;
		if (this._lastResetTime + this._resetDelay <= fVar3) {
			this._currentUsage = 0;
			fVar3 = Time.realtimeSinceStartup;
			this._lastResetTime = fVar3;
		}
		iVar1 = this._maxUsage;
		iVar2 = usage + this._currentUsage;
		if (iVar2 <= iVar1) {
			this._currentUsage = iVar2;
		}
		return iVar2 <= iVar1;
	}

	[Token(Token = "0x60056B4")]
	[Address(RVA = "0x5CF0560", Offset = "0x5CEF560", VA = "0x5CF0560")]
	private void TryReset()
	{
		// Lifted from source/cpp/Utility/RateLimit.c (Utility.RateLimit$$TryReset): clean
		float fVar1;

		fVar1 = Time.realtimeSinceStartup;
		if (this._lastResetTime + this._resetDelay <= fVar1) {
			this._currentUsage = 0;
			fVar1 = Time.realtimeSinceStartup;
			this._lastResetTime = fVar1;
		}
		return;
	}
}
