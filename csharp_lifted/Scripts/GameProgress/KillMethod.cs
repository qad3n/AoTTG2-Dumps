// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.KillMethod
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/KillMethod.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x200036B")]
public struct KillMethod
{
	[Token(Token = "0x400110B")]
	public const string NullSpecialKey = "None";

	[Token(Token = "0x400110C")]
	[FieldOffset(Offset = "0x0")]
	public KillWeapon Weapon;

	[Token(Token = "0x400110D")]
	[FieldOffset(Offset = "0x8")]
	public string Special;

	[Token(Token = "0x17000255")]
	public readonly string WeaponKey
	{
		[Token(Token = "0x6001545")]
		[Address(RVA = "0x581CE00", Offset = "0x581BE00", VA = "0x581CE00")]
		get
		{
			// Lifted from source/cpp/GameProgress/KillMethod.c (GameProgress.KillMethod$$get_WeaponKey): 1 lines keep C-only constructs
			String pSVar1;
			Enum local_20;

			local_20.klass = (Enum)typeof(KillWeapon);
			local_20.monitor = (IntPtr)0xffffffffffffffff;
			return pSVar1;
		}
	}

	[Token(Token = "0x17000256")]
	public readonly string SpecialKey
	{
		[Token(Token = "0x6001546")]
		[Address(RVA = "0x581CE60", Offset = "0x581BE60", VA = "0x581CE60")]
		get
		{
			// Lifted from source/cpp/GameProgress/KillMethod.c (GameProgress.KillMethod$$get_SpecialKey): clean
			bool bVar1;

			bVar1 = String.IsNullOrEmpty(this.Special);
			if (bVar1) {
				return "None";
			}
			return this.Special;
		}
	}

	[Token(Token = "0x6001543")]
	[Address(RVA = "0x58218E0", Offset = "0x58208E0", VA = "0x58218E0")]
	public KillMethod(KillWeapon weapon, string special)
	{
		// Lifted from source/cpp/GameProgress/KillMethod.c (GameProgress.KillMethod$$.ctor): clean
		this.Weapon = weapon;
		this.Special = special;
		return;
	}

	[Token(Token = "0x6001544")]
	[Address(RVA = "0x5821900", Offset = "0x5820900", VA = "0x5821900")]
	public static implicit operator KillMethod(KillWeapon weapon)
	{
		// Lifted from source/cpp/GameProgress/KillMethod.c (GameProgress.KillMethod$$op_Implicit): 2 lines keep C-only constructs
		KillMethod GVar1;
		ulong local_18;
		String local_10;

		local_18 = CONCAT44(0, weapon);
		local_10 = "";
		GVar1.Special = local_10;
		GVar1._0_8_ = local_18;
		return (KillMethod)GVar1;
	}

	[Token(Token = "0x6001547")]
	[Address(RVA = "0x5821960", Offset = "0x5820960", VA = "0x5821960", Slot = "3")]
	public override readonly string ToString()
	{
		// Lifted from source/cpp/GameProgress/KillMethod.c (GameProgress.KillMethod$$ToString): 4 lines keep C-only constructs
		bool bVar1;
		String[] values;
		String pSVar2;
		String* ppSVar3;
		Enum SStack_28;

		values = (String[])new string[5];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = "(";
			SStack_28.klass = (Enum)typeof(KillWeapon);
			SStack_28.monitor = (IntPtr)0xffffffffffffffff;
			pSVar2 = SStack_28.ToString();
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = pSVar2;
				if (2 < (uint)values.Length) {
					values[2] = ", ";
					bVar1 = String.IsNullOrEmpty(this.Special);
					if ((values.Length & 0xfffffffc) != 0) {
						if (bVar1) {
							ppSVar3 = &"None";
						}
						else {
							ppSVar3 = &this.Special;
						}
						values[3] = *ppSVar3;
						if (4 < (uint)values.Length) {
							values[4] = ")";
							pSVar2 = String.Concat(values);
							return pSVar2;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
