// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.CharacterEffectPresets
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/CharacterEffectPresets.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace PatreonEffects;

[Token(Token = "0x2000080")]
public static class CharacterEffectPresets
{
	[Token(Token = "0x400027D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] Options;

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x57776A0", Offset = "0x57766A0", VA = "0x57776A0")]
	public static CharacterEffectType ParseOrDefault(string raw)
	{
		// Lifted from source/cpp/PatreonEffects/CharacterEffectPresets.c (PatreonEffects.CharacterEffectPresets$$ParseOrDefault): clean
		bool bVar1;
		int iVar2;
		int local_1c;

		local_1c = 0;
		bVar1 = String.IsNullOrEmpty(raw);
		if (!bVar1) {
			bVar1 = Enum.TryParse<CharacterEffectType>(raw, ref local_1c);
			if (bVar1) {
				return local_1c;
			}
		}
		bVar1 = (raw == "NeonPulse");
		if ((!bVar1) && (bVar1 = (raw == "GlowOutline"), !bVar1)) {
			bVar1 = (raw == "PlasmaFlow");
			if (!bVar1) {
				bVar1 = (raw == "ToxicSurge");
				if (!bVar1) {
					bVar1 = (raw == "FrostEdge");
					if (!bVar1) {
						bVar1 = (raw == "RoyalAura");
						if (!bVar1) {
							bVar1 = (raw == "ColorAmp");
							if (!bVar1) {
								bVar1 = (raw == "RuneGlow");
								if (!bVar1) {
								}
							}
						}
					}
				}
			}
		}
		return iVar2;
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x5777880", Offset = "0x5776880", VA = "0x5777880")]
	public static CharacterEffectPreset GetPreset(CharacterEffectType type)
	{
		// Lifted from source/cpp/PatreonEffects/CharacterEffectPresets.c (PatreonEffects.CharacterEffectPresets$$GetPreset): clean
		switch(type) {
		case 1:
			__return_storage_ptr__.StyleMode = 0;
			__return_storage_ptr__.GlowIntensity = 1.8;
			__return_storage_ptr__.OutlineThickness = 2.6;
			__return_storage_ptr__.OutlinePower = 2.2;
			__return_storage_ptr__.PulseSpeed = 1.2;
			__return_storage_ptr__.PulseAmount = 0.12;
			__return_storage_ptr__.FlowSpeed = 0.35;
			__return_storage_ptr__.FlowStrength = 0.16;
			__return_storage_ptr__.TexturePreserve = 1.22;
			__return_storage_ptr__.EmissionFromTexture = 0.84;
			__return_storage_ptr__.DetailScale = 10.0;
			__return_storage_ptr__.DetailSpeed = 0.65;
			__return_storage_ptr__.SecondaryScroll = 0.35;
			__return_storage_ptr__.EdgeSpark = 0.2;
			__return_storage_ptr__.StyleStrength = 0.55;
			return __return_storage_ptr__;
		case 2:
			__return_storage_ptr__.StyleMode = 4;
			__return_storage_ptr__.GlowIntensity = 2.05;
			__return_storage_ptr__.OutlineThickness = 3.2;
			__return_storage_ptr__.OutlinePower = 2.8;
			__return_storage_ptr__.PulseSpeed = 1.1;
			__return_storage_ptr__.PulseAmount = 0.08;
			__return_storage_ptr__.FlowSpeed = 0.15;
			__return_storage_ptr__.FlowStrength = 0.05;
			__return_storage_ptr__.TexturePreserve = 1.24;
			__return_storage_ptr__.EmissionFromTexture = 0.95;
			__return_storage_ptr__.DetailScale = 9.0;
			__return_storage_ptr__.DetailSpeed = 0.45;
			__return_storage_ptr__.SecondaryScroll = 0.15;
			__return_storage_ptr__.EdgeSpark = 0.15;
			__return_storage_ptr__.StyleStrength = 1.0;
			return __return_storage_ptr__;
		case 3:
			__return_storage_ptr__.StyleMode = 1;
			__return_storage_ptr__.GlowIntensity = 1.35;
			__return_storage_ptr__.OutlineThickness = 1.15;
			__return_storage_ptr__.OutlinePower = 1.8;
			__return_storage_ptr__.PulseSpeed = 1.2;
			__return_storage_ptr__.PulseAmount = 0.18;
			__return_storage_ptr__.FlowSpeed = 0.5;
			__return_storage_ptr__.FlowStrength = 0.28;
			__return_storage_ptr__.TexturePreserve = 1.16;
			__return_storage_ptr__.EmissionFromTexture = 0.74;
			__return_storage_ptr__.DetailScale = 14.0;
			__return_storage_ptr__.DetailSpeed = 0.95;
			__return_storage_ptr__.SecondaryScroll = 0.45;
			__return_storage_ptr__.EdgeSpark = 0.25;
			__return_storage_ptr__.StyleStrength = 0.9;
			return __return_storage_ptr__;
		case 4:
			__return_storage_ptr__.StyleMode = 2;
			__return_storage_ptr__.GlowIntensity = 2.05;
			__return_storage_ptr__.OutlineThickness = 1.45;
			__return_storage_ptr__.OutlinePower = 2.0;
			__return_storage_ptr__.PulseSpeed = 1.35;
			__return_storage_ptr__.PulseAmount = 0.24;
			__return_storage_ptr__.FlowSpeed = 0.9;
			__return_storage_ptr__.FlowStrength = 0.55;
			__return_storage_ptr__.TexturePreserve = 1.08;
			__return_storage_ptr__.EmissionFromTexture = 0.55;
			__return_storage_ptr__.DetailScale = 17.5;
			__return_storage_ptr__.DetailSpeed = 1.35;
			__return_storage_ptr__.SecondaryScroll = 0.8;
			__return_storage_ptr__.EdgeSpark = 0.52;
			__return_storage_ptr__.StyleStrength = 1.05;
			return __return_storage_ptr__;
		case 5:
			__return_storage_ptr__.StyleMode = 3;
			__return_storage_ptr__.GlowIntensity = 1.05;
			__return_storage_ptr__.OutlineThickness = 2.7;
			__return_storage_ptr__.OutlinePower = 3.2;
			__return_storage_ptr__.PulseSpeed = 0.28;
			__return_storage_ptr__.PulseAmount = 0.03;
			__return_storage_ptr__.FlowSpeed = 0.12;
			__return_storage_ptr__.FlowStrength = 0.07;
			__return_storage_ptr__.TexturePreserve = 1.3;
			__return_storage_ptr__.EmissionFromTexture = 0.92;
			__return_storage_ptr__.DetailScale = 20.0;
			__return_storage_ptr__.DetailSpeed = 0.2;
			__return_storage_ptr__.SecondaryScroll = 0.08;
			__return_storage_ptr__.EdgeSpark = 0.12;
			__return_storage_ptr__.StyleStrength = 0.88;
			return __return_storage_ptr__;
		case 6:
			__return_storage_ptr__.StyleMode = 5;
			__return_storage_ptr__.GlowIntensity = 1.85;
			__return_storage_ptr__.OutlineThickness = 2.45;
			__return_storage_ptr__.OutlinePower = 2.9;
			__return_storage_ptr__.PulseSpeed = 1.05;
			__return_storage_ptr__.PulseAmount = 0.1;
			__return_storage_ptr__.FlowSpeed = 0.4;
			__return_storage_ptr__.FlowStrength = 0.28;
			__return_storage_ptr__.TexturePreserve = 1.2;
			__return_storage_ptr__.EmissionFromTexture = 0.85;
			__return_storage_ptr__.DetailScale = 11.0;
			__return_storage_ptr__.DetailSpeed = 0.55;
			__return_storage_ptr__.SecondaryScroll = 0.35;
			__return_storage_ptr__.EdgeSpark = 0.22;
			__return_storage_ptr__.StyleStrength = 0.95;
			return __return_storage_ptr__;
		case 7:
			__return_storage_ptr__.StyleMode = 6;
			__return_storage_ptr__.GlowIntensity = 1.95;
			__return_storage_ptr__.OutlineThickness = 1.7;
			__return_storage_ptr__.OutlinePower = 2.2;
			__return_storage_ptr__.PulseSpeed = 2.2;
			__return_storage_ptr__.PulseAmount = 0.26;
			__return_storage_ptr__.FlowSpeed = 0.9;
			__return_storage_ptr__.FlowStrength = 0.45;
			__return_storage_ptr__.TexturePreserve = 1.14;
			__return_storage_ptr__.EmissionFromTexture = 0.72;
			__return_storage_ptr__.DetailScale = 18.0;
			__return_storage_ptr__.DetailSpeed = 1.3;
			__return_storage_ptr__.SecondaryScroll = 0.95;
			__return_storage_ptr__.EdgeSpark = 0.48;
			__return_storage_ptr__.StyleStrength = 1.0;
			return __return_storage_ptr__;
		case 8:
			__return_storage_ptr__.StyleMode = 7;
			__return_storage_ptr__.GlowIntensity = 1.45;
			__return_storage_ptr__.OutlineThickness = 1.3;
			__return_storage_ptr__.OutlinePower = 1.9;
			__return_storage_ptr__.PulseSpeed = 1.0;
			__return_storage_ptr__.PulseAmount = 0.08;
			__return_storage_ptr__.FlowSpeed = 0.5;
			__return_storage_ptr__.FlowStrength = 0.3;
			__return_storage_ptr__.TexturePreserve = 1.12;
			__return_storage_ptr__.EmissionFromTexture = 0.78;
			__return_storage_ptr__.DetailScale = 16.0;
			__return_storage_ptr__.DetailSpeed = 0.75;
			__return_storage_ptr__.SecondaryScroll = 0.45;
			__return_storage_ptr__.EdgeSpark = 0.2;
			__return_storage_ptr__.StyleStrength = 0.92;
			return __return_storage_ptr__;
		case 9:
			__return_storage_ptr__.StyleMode = 8;
			__return_storage_ptr__.GlowIntensity = 1.7;
			__return_storage_ptr__.OutlineThickness = 1.15;
			__return_storage_ptr__.OutlinePower = 2.1;
			__return_storage_ptr__.PulseSpeed = 0.8;
			__return_storage_ptr__.PulseAmount = 0.12;
			__return_storage_ptr__.FlowSpeed = 0.28;
			__return_storage_ptr__.FlowStrength = 0.2;
			__return_storage_ptr__.TexturePreserve = 1.2;
			__return_storage_ptr__.EmissionFromTexture = 0.8;
			__return_storage_ptr__.DetailScale = 22.0;
			__return_storage_ptr__.DetailSpeed = 0.35;
			__return_storage_ptr__.SecondaryScroll = 0.22;
			__return_storage_ptr__.EdgeSpark = 0.35;
			__return_storage_ptr__.StyleStrength = 1.0;
			return __return_storage_ptr__;
		case 10:
			__return_storage_ptr__.StyleMode = 9;
			__return_storage_ptr__.GlowIntensity = 1.8;
			__return_storage_ptr__.OutlineThickness = 1.9;
			__return_storage_ptr__.OutlinePower = 2.4;
			__return_storage_ptr__.PulseSpeed = 1.4;
			__return_storage_ptr__.PulseAmount = 0.15;
			__return_storage_ptr__.FlowSpeed = 0.42;
			__return_storage_ptr__.FlowStrength = 0.25;
			__return_storage_ptr__.TexturePreserve = 1.18;
			__return_storage_ptr__.EmissionFromTexture = 0.82;
			__return_storage_ptr__.DetailScale = 12.0;
			__return_storage_ptr__.DetailSpeed = 0.45;
			__return_storage_ptr__.SecondaryScroll = 0.3;
			__return_storage_ptr__.EdgeSpark = 0.28;
			__return_storage_ptr__.StyleStrength = 0.98;
			return __return_storage_ptr__;
		default: ;
			__return_storage_ptr__.StyleMode = 0;
			__return_storage_ptr__.GlowIntensity = 0.0;
			__return_storage_ptr__.OutlineThickness = 0.0;
			__return_storage_ptr__.OutlinePower = 1.0;
			__return_storage_ptr__.PulseSpeed = 0.0;
			__return_storage_ptr__.PulseAmount = 0.0;
			__return_storage_ptr__.FlowSpeed = 0.0;
			__return_storage_ptr__.FlowStrength = 0.0;
			__return_storage_ptr__.TexturePreserve = 1.0;
			__return_storage_ptr__.EmissionFromTexture = 0.0;
			__return_storage_ptr__.DetailScale = 8.0;
			__return_storage_ptr__.DetailSpeed = 0.0;
			__return_storage_ptr__.SecondaryScroll = 0.0;
			__return_storage_ptr__.EdgeSpark = 0.0;
			__return_storage_ptr__.StyleStrength = 0.0;
			return __return_storage_ptr__;
		}
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/PatreonEffects/CharacterEffectPresets.c.

	// PatreonEffects.CharacterEffectPresets$$.cctor: 11 lines keep C-only constructs
	static CharacterEffectPresets()
	{
		String[] pSVar1;
		String pSVar2;
		Enum SStack_118;
		Enum SStack_100;
		Enum SStack_e8;
		Enum SStack_d0;
		Enum SStack_b8;
		Enum SStack_a0;
		Enum SStack_88;
		Enum SStack_70;
		Enum SStack_58;
		Enum SStack_40;
		Enum SStack_28;

		pSVar1 = (String[])new string[0xb];
		SStack_28.klass = (Enum)typeof(CharacterEffectType);
		SStack_28.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = SStack_28.ToString();
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = pSVar2;
			SStack_40.klass = (Enum)typeof(CharacterEffectType);
			SStack_40.monitor = (IntPtr)0xffffffffffffffff;
			pSVar2 = SStack_40.ToString();
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = pSVar2;
				SStack_58.klass = (Enum)typeof(CharacterEffectType);
				SStack_58.monitor = (IntPtr)0xffffffffffffffff;
				pSVar2 = SStack_58.ToString();
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = pSVar2;
					SStack_70.klass = (Enum)typeof(CharacterEffectType);
					SStack_70.monitor = (IntPtr)0xffffffffffffffff;
					pSVar2 = SStack_70.ToString();
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = pSVar2;
						SStack_88.klass = (Enum)typeof(CharacterEffectType);
						SStack_88.monitor = (IntPtr)0xffffffffffffffff;
						pSVar2 = SStack_88.ToString();
						if (4 < (uint)pSVar1.Length) {
							pSVar1[4] = pSVar2;
							SStack_a0.klass = (Enum)typeof(CharacterEffectType);
							SStack_a0.monitor = (IntPtr)0xffffffffffffffff;
							pSVar2 = SStack_a0.ToString();
							if (5 < (uint)pSVar1.Length) {
								pSVar1[5] = pSVar2;
								SStack_b8.klass = (Enum)typeof(CharacterEffectType);
								SStack_b8.monitor = (IntPtr)0xffffffffffffffff;
								pSVar2 = SStack_b8.ToString();
								if (6 < (uint)pSVar1.Length) {
									pSVar1[6] = pSVar2;
									SStack_d0.klass = (Enum)typeof(CharacterEffectType);
									SStack_d0.monitor = (IntPtr)0xffffffffffffffff;
									pSVar2 = SStack_d0.ToString();
									if ((pSVar1.Length & 0xfffffff8) != 0) {
										pSVar1[7] = pSVar2;
										SStack_e8.klass = (Enum)typeof(CharacterEffectType);
										SStack_e8.monitor = (IntPtr)0xffffffffffffffff;
										pSVar2 = SStack_e8.ToString();
										if (8 < (uint)pSVar1.Length) {
											pSVar1[8] = pSVar2;
											SStack_100.klass = (Enum)typeof(CharacterEffectType);
											SStack_100.monitor = (IntPtr)0xffffffffffffffff;
											pSVar2 = SStack_100.ToString();
											if (9 < (uint)pSVar1.Length) {
												pSVar1[9] = pSVar2;
												SStack_118.klass = (Enum)typeof(CharacterEffectType);
												SStack_118.monitor = (IntPtr)0xffffffffffffffff;
												pSVar2 = SStack_118.ToString();
												if (10 < (uint)pSVar1.Length) {
													pSVar1[10] = pSVar2;
													CharacterEffectPresets.Options = pSVar1;
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
