// ==================== AoTTG2 cross-reference ====================
// Type: BombUtil
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/BombUtil.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

[Token(Token = "0x2000024")]
public class BombUtil
{
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x574E230", Offset = "0x574D230", VA = "0x574E230")]
	public static float GetOldRadiusCost(float radius)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetOldRadiusCost): clean
		return (radius + -20.0) * 0.25;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x574E250", Offset = "0x574D250", VA = "0x574E250")]
	public static float GetOldSpeedCost(float speed)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetOldSpeedCost): clean
		return (speed + -200.0) / 60.0;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x574E270", Offset = "0x574D270", VA = "0x574E270")]
	public static float GetOldCooldownCost(float cooldown)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetOldCooldownCost): clean
		return (cooldown + -5.0) / -0.4;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x574E290", Offset = "0x574D290", VA = "0x574E290")]
	public static float GetOldRangeCost(float range)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetOldRangeCost): clean
		return (range + -200.0) / 60.0;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x574E2B0", Offset = "0x574D2B0", VA = "0x574E2B0")]
	public static float GetOldBombRadius(float pointsSpent)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetOldBombRadius): clean
		return pointsSpent * 4.0 + 20.0;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x574E2D0", Offset = "0x574D2D0", VA = "0x574E2D0")]
	public static float GetOldBombSpeed(float pointsSpent)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetOldBombSpeed): clean
		return pointsSpent * 60.0 + 200.0;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x574E2F0", Offset = "0x574D2F0", VA = "0x574E2F0")]
	public static float GetOldBombCooldown(float pointsSpent)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetOldBombCooldown): clean
		return pointsSpent * -0.4 + 5.0;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x574E310", Offset = "0x574D310", VA = "0x574E310")]
	public static float GetOldBombRange(float pointsSpent)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetOldBombRange): clean
		return pointsSpent * 60.0 + 200.0;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x574E330", Offset = "0x574D330", VA = "0x574E330")]
	public static float GetBombStat(float pointsSpent, float maxValue, float valuePerPoint, float cutoff)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetBombStat): clean
		float fVar1;

		if (cutoff <= 10.0) {
			if ((pointsSpent == 10.0) && (!NAN(pointsSpent))) {
				return maxValue;
			}
			if (cutoff < pointsSpent) {
				return maxValue + (10.0 - pointsSpent) * valuePerPoint * -0.5;
			}
			fVar1 = (cutoff - pointsSpent) * valuePerPoint + (10.0 - cutoff) * valuePerPoint * 0.5;
		}
		else {
			fVar1 = (10.0 - pointsSpent) * valuePerPoint;
		}
		return maxValue - fVar1;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x574E3B0", Offset = "0x574D3B0", VA = "0x574E3B0")]
	public static float GetBombRadius(float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetBombRadius): clean
		float fVar1;
		float fVar2;

		fVar1 = oldMaxCost * 4.0 + 20.0;
		fVar2 = (fVar1 - (oldMinCost * 4.0 + 20.0)) / 10.0;
		if (10.0 < cutoff) {
			return fVar1 - (10.0 - pointsSpent) * fVar2;
		}
		if ((pointsSpent != 10.0) || (NAN(pointsSpent))) {
			if (cutoff < pointsSpent) {
				return fVar1 + (10.0 - pointsSpent) * fVar2 * -0.5;
			}
			fVar1 = fVar1 - ((cutoff - pointsSpent) * fVar2 + (10.0 - cutoff) * fVar2 * 0.5);
		}
		return fVar1;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x574E450", Offset = "0x574D450", VA = "0x574E450")]
	public static float GetBombRange(float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetBombRange): clean
		float fVar1;
		float fVar2;

		fVar1 = oldMaxCost * 60.0 + 200.0;
		fVar2 = (fVar1 - (oldMinCost * 60.0 + 200.0)) / 10.0;
		if (10.0 < cutoff) {
			return fVar1 - (10.0 - pointsSpent) * fVar2;
		}
		if ((pointsSpent != 10.0) || (NAN(pointsSpent))) {
			if (cutoff < pointsSpent) {
				return fVar1 + (10.0 - pointsSpent) * fVar2 * -0.5;
			}
			fVar1 = fVar1 - ((cutoff - pointsSpent) * fVar2 + (10.0 - cutoff) * fVar2 * 0.5);
		}
		return fVar1;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x574E4F0", Offset = "0x574D4F0", VA = "0x574E4F0")]
	public static float GetBombSpeed(float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetBombSpeed): clean
		float fVar1;
		float fVar2;

		fVar1 = oldMaxCost * 60.0 + 200.0;
		fVar2 = (fVar1 - (oldMinCost * 60.0 + 200.0)) / 10.0;
		if (10.0 < cutoff) {
			return fVar1 - (10.0 - pointsSpent) * fVar2;
		}
		if ((pointsSpent != 10.0) || (NAN(pointsSpent))) {
			if (cutoff < pointsSpent) {
				return fVar1 + (10.0 - pointsSpent) * fVar2 * -0.5;
			}
			fVar1 = fVar1 - ((cutoff - pointsSpent) * fVar2 + (10.0 - cutoff) * fVar2 * 0.5);
		}
		return fVar1;
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x574E590", Offset = "0x574D590", VA = "0x574E590")]
	public static float GetBombCooldown(float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff)
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$GetBombCooldown): clean
		float fVar1;
		float fVar2;

		fVar1 = 5.0 - oldMaxCost * 0.4;
		fVar2 = (fVar1 - (5.0 - oldMinCost * 0.4)) / 10.0;
		if (10.0 < cutoff) {
			return fVar1 - (10.0 - pointsSpent) * fVar2;
		}
		if ((pointsSpent != 10.0) || (NAN(pointsSpent))) {
			if (cutoff < pointsSpent) {
				return fVar1 + (10.0 - pointsSpent) * fVar2 * -0.5;
			}
			fVar1 = fVar1 - ((cutoff - pointsSpent) * fVar2 + (10.0 - cutoff) * fVar2 * 0.5);
		}
		return fVar1;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x574E630", Offset = "0x574D630", VA = "0x574E630")]
	public BombUtil()
	{
		// Lifted from source/cpp/BombUtil.c (BombUtil$$.ctor): clean
		base();
		return;
	}
}
