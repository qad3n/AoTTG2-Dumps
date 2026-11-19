// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputControlLayout
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputControlLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UI;

[Serializable]
[Token(Token = "0x200074D")]
public class MobileInputControlLayout
{
	[Token(Token = "0x40024C9")]
	private const float DefaultJoystickBaseScale = 0.45f;

	[Token(Token = "0x40024CA")]
	private const float DefaultJoystickHandleScale = 0.43f;

	[Token(Token = "0x40024CB")]
	private const float DefaultJoystickReelOutRingDiameter = 380f;

	[NonSerialized]
	[Token(Token = "0x40024CC")]
	[FieldOffset(Offset = "0x10")]
	public string Id;

	[Token(Token = "0x40024CD")]
	[FieldOffset(Offset = "0x18")]
	public string Label;

	[Token(Token = "0x40024CE")]
	[FieldOffset(Offset = "0x20")]
	public MobileInputSkin Icon;

	[Token(Token = "0x40024CF")]
	[FieldOffset(Offset = "0x28")]
	public float IconSize;

	[Token(Token = "0x40024D0")]
	[FieldOffset(Offset = "0x30")]
	public string Actions;

	[Token(Token = "0x40024D1")]
	[FieldOffset(Offset = "0x38")]
	public string Kind;

	[Token(Token = "0x40024D2")]
	[FieldOffset(Offset = "0x40")]
	public string Shape;

	[Token(Token = "0x40024D3")]
	[FieldOffset(Offset = "0x48")]
	public float X;

	[Token(Token = "0x40024D4")]
	[FieldOffset(Offset = "0x4C")]
	public float Y;

	[Token(Token = "0x40024D5")]
	[FieldOffset(Offset = "0x50")]
	public float Width;

	[Token(Token = "0x40024D6")]
	[FieldOffset(Offset = "0x54")]
	public float Height;

	[Token(Token = "0x40024D7")]
	[FieldOffset(Offset = "0x58")]
	public string PopupMode;

	[Token(Token = "0x40024D8")]
	[FieldOffset(Offset = "0x60")]
	public MobileInputSkin Skin;

	[Token(Token = "0x40024D9")]
	[FieldOffset(Offset = "0x68")]
	public MobileInputSkin OnSkin;

	[Token(Token = "0x40024DA")]
	[FieldOffset(Offset = "0x70")]
	public MobileInputSkin JoystickHandleSkin;

	[Token(Token = "0x40024DB")]
	[FieldOffset(Offset = "0x78")]
	public MobileInputSkin JoystickActiveSkin;

	[Token(Token = "0x40024DC")]
	[FieldOffset(Offset = "0x80")]
	public MobileInputSkin JoystickRingSkin;

	[Token(Token = "0x40024DD")]
	[FieldOffset(Offset = "0x88")]
	public MobileInputSkin JoystickReelInSkin;

	[Token(Token = "0x40024DE")]
	[FieldOffset(Offset = "0x90")]
	public MobileInputSkin JoystickReelOutSkin;

	[Token(Token = "0x40024DF")]
	[FieldOffset(Offset = "0x98")]
	public float JoystickBaseScale;

	[Token(Token = "0x40024E0")]
	[FieldOffset(Offset = "0x9C")]
	public float JoystickHandleScale;

	[Token(Token = "0x40024E1")]
	[FieldOffset(Offset = "0xA0")]
	public float JoystickReelOutRingDiameter;

	[Token(Token = "0x40024E2")]
	[FieldOffset(Offset = "0xA4")]
	public bool DisableContentMovement;

	[Token(Token = "0x40024E3")]
	[FieldOffset(Offset = "0xA5")]
	public bool AllowLookAreaThrough;

	[Token(Token = "0x40024E4")]
	[FieldOffset(Offset = "0xA8")]
	public float BindReelInAngle;

	[Token(Token = "0x40024E5")]
	[FieldOffset(Offset = "0xAC")]
	public float BindReelOutAngle;

	[Token(Token = "0x40024E6")]
	[FieldOffset(Offset = "0xB0")]
	public bool AimAssistOnPress;

	[Token(Token = "0x40024E7")]
	[FieldOffset(Offset = "0xB1")]
	public bool AimAssistOnRelease;

	[Token(Token = "0x40024E8")]
	[FieldOffset(Offset = "0xB8")]
	public List<MobileInputControlLayout> Children;

	[Token(Token = "0x60046BC")]
	[Address(RVA = "0x5B6B3B0", Offset = "0x5B6A3B0", VA = "0x5B6B3B0")]
	public string[] GetActionIds()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetActionIds): 2 lines keep C-only constructs
		int piVar1;
		String[] pSVar2;
		bool bVar4;
		uint uVar5;
		String[] pSVar6;
		List<string> __this_00;
		Char[] separator;
		String pSVar7;
		uint uVar8;
		long lVar9;
		MobileInputBinding local_38;

		local_38 = null;
		bVar4 = String.IsNullOrWhiteSpace(this.Actions);
		if (bVar4) {
			pSVar6 = (String[])new string[0];
			return pSVar6;
		}
		__this_00 = new List<string>();
		pSVar7 = this.Actions;
		separator = (Char[])new char[4];
		RuntimeHelpers.InitializeArray((Array)separator, FieldRva_PrivateImplementationDetails_8B02B2C27AF613530575C89F7AED6B3E9F9F86109996B40CC363B81F33EDC924);
		if (pSVar7 != null) {
			pSVar6 = pSVar7.Split(separator, 1);
			if (pSVar6 != null) {
				uVar5 = (uint)pSVar6.Length;
				if (__this_00 == null) {
					if ((int)uVar5 < 1) goto label_05c6b66d;
					lVar9 = 0;
					do {
						if (uVar5 <= (uint)lVar9) goto label_05c6b672;
						if (pSVar6[lVar9] == null) goto label_05c6b66d;
						pSVar7 = (pSVar6[lVar9]).Trim();
						bVar4 = MobileInputBindingRegistry.TryGetBinding(pSVar7, ref local_38);
						if (bVar4) goto label_05c6b66d;
						uVar5 = (uint)pSVar6.Length;
						lVar9 = lVar9 + 1;
					} while ((int)lVar9 < (int)uVar5);
				}
				else if (0 < (int)uVar5) {
					uVar8 = 0;
					do {
						if (uVar5 <= uVar8) {
	label_05c6b672: ;
							throw new IndexOutOfRangeException();
						}
						if (pSVar6[(int)uVar8] == null) goto label_05c6b66d;
						pSVar7 = (pSVar6[(int)uVar8]).Trim();
						bVar4 = MobileInputBindingRegistry.TryGetBinding(pSVar7, ref local_38);
						if (bVar4) {
							bVar4 = __this_00.Contains((object)pSVar7);
							if (!bVar4) {
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pSVar2 = __this_00._items;
								if (pSVar2 == null) goto label_05c6b66d;
								uVar5 = __this_00._size;
								if (uVar5 < (uint)pSVar2.Length) {
									__this_00._size = uVar5 + 1;
									pSVar2[(int)uVar5] = pSVar7;
								}
								else {
									__this_00.AddWithResize((object)pSVar7);
								}
							}
						}
						uVar8 = uVar8 + 1;
						uVar5 = (uint)pSVar6.Length;
					} while ((int)uVar8 < (int)uVar5);
				}
				if (__this_00 != null) {
					pSVar6 = (String[])__this_00.ToArray();
					return pSVar6;
				}
			}
		}
	label_05c6b66d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046BD")]
	[Address(RVA = "0x5B6B330", Offset = "0x5B6A330", VA = "0x5B6B330")]
	public MobileInputControlKind GetKind()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetKind): clean
		String value;
		bool bVar1;
		int iVar2;
		int local_c;

		local_c = 0;
		value = this.Kind;
		bVar1 = Enum.TryParse<MobileInputControlKind>(value, ref local_c);
		if (bVar1) {
		}
		return iVar2;
	}

	[Token(Token = "0x60046BE")]
	[Address(RVA = "0x5B68350", Offset = "0x5B67350", VA = "0x5B68350")]
	public MobileInputControlShape GetShape()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetShape): clean
		String pSVar1;
		bool bVar2;
		int iVar3;
		int local_20;
		int local_1c;

		local_20 = 0;
		local_1c = 0;
		pSVar1 = this.Kind;
		bVar2 = Enum.TryParse<MobileInputControlKind>(pSVar1, ref local_1c);
		if ((!bVar2) || (iVar3 = 0, local_1c != 7)) {
			pSVar1 = this.Shape;
			bVar2 = Enum.TryParse<MobileInputControlShape>(pSVar1, ref local_20);
			iVar3 = 0;
			if (bVar2) {
				iVar3 = local_20;
			}
		}
		return iVar3;
	}

	[Token(Token = "0x60046BF")]
	[Address(RVA = "0x5B6C6A0", Offset = "0x5B6B6A0", VA = "0x5B6C6A0")]
	public MobileInputPopupMode GetPopupMode()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetPopupMode): clean
		String value;
		bool bVar1;
		int iVar2;
		int local_c;

		local_c = 0;
		value = this.PopupMode;
		bVar1 = Enum.TryParse<MobileInputPopupMode>(value, ref local_c);
		if (bVar1) {
		}
		return iVar2;
	}

	[Token(Token = "0x60046C0")]
	[Address(RVA = "0x5B68820", Offset = "0x5B67820", VA = "0x5B68820")]
	public MobileInputSkin GetSkin()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetSkin): clean
		MobileInputSkin pUVar1;

		if (Il2CppMethodInitialized_0754791c == false) {
			Il2CppMethodInitialized_0754791c = true;
			pUVar1 = this.Skin;
		}
		else {
			pUVar1 = this.Skin;
		}
		if (pUVar1 == null) {
			pUVar1.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar1.PreserveAspect = true;
			pUVar1 = new MobileInputSkin();
			pUVar1.R = 0.0;
			pUVar1.G = 0.0;
			pUVar1.B = 0.0;
			pUVar1.A = 0.38;
			return pUVar1;
		}
		return pUVar1;
	}

	[Token(Token = "0x60046C1")]
	[Address(RVA = "0x5B69F80", Offset = "0x5B68F80", VA = "0x5B69F80")]
	public MobileInputSkin GetOnSkin()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetOnSkin): clean
		MobileInputSkin pUVar1;

		if (Il2CppMethodInitialized_0754791d == false) {
			Il2CppMethodInitialized_0754791d = true;
			pUVar1 = this.OnSkin;
		}
		else {
			pUVar1 = this.OnSkin;
		}
		if (pUVar1 == null) {
			pUVar1.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar1.PreserveAspect = true;
			pUVar1 = new MobileInputSkin();
			pUVar1.R = 1.0;
			pUVar1.G = 1.0;
			pUVar1.B = 1.0;
			pUVar1.A = 0.38;
			return pUVar1;
		}
		return pUVar1;
	}

	[Token(Token = "0x60046C2")]
	[Address(RVA = "0x5B68900", Offset = "0x5B67900", VA = "0x5B68900")]
	public MobileInputSkin GetJoystickHandleSkin()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetJoystickHandleSkin): clean
		MobileInputSkin pUVar1;

		if (Il2CppMethodInitialized_0754791e == false) {
			Il2CppMethodInitialized_0754791e = true;
			pUVar1 = this.JoystickHandleSkin;
		}
		else {
			pUVar1 = this.JoystickHandleSkin;
		}
		if (pUVar1 == null) {
			pUVar1.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar1.PreserveAspect = true;
			pUVar1 = new MobileInputSkin();
			pUVar1.R = 1.0;
			pUVar1.G = 1.0;
			pUVar1.B = 1.0;
			pUVar1.A = 0.35;
			return pUVar1;
		}
		return pUVar1;
	}

	[Token(Token = "0x60046C3")]
	[Address(RVA = "0x5B68990", Offset = "0x5B67990", VA = "0x5B68990")]
	public MobileInputSkin GetJoystickActiveSkin()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetJoystickActiveSkin): clean
		MobileInputSkin pUVar1;

		if (Il2CppMethodInitialized_0754791f == false) {
			Il2CppMethodInitialized_0754791f = true;
			pUVar1 = this.JoystickActiveSkin;
		}
		else {
			pUVar1 = this.JoystickActiveSkin;
		}
		if (pUVar1 == null) {
			pUVar1.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar1.PreserveAspect = true;
			pUVar1 = new MobileInputSkin();
			pUVar1.R = 1.0;
			pUVar1.G = 1.0;
			pUVar1.B = 1.0;
			pUVar1.A = 0.4;
			return pUVar1;
		}
		return pUVar1;
	}

	[Token(Token = "0x60046C4")]
	[Address(RVA = "0x5B685C0", Offset = "0x5B675C0", VA = "0x5B685C0")]
	public MobileInputSkin GetJoystickRingSkin()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetJoystickRingSkin): clean
		MobileInputSkin pUVar1;

		if (Il2CppMethodInitialized_07547920 == false) {
			Il2CppMethodInitialized_07547920 = true;
			pUVar1 = this.JoystickRingSkin;
		}
		else {
			pUVar1 = this.JoystickRingSkin;
		}
		if (pUVar1 == null) {
			pUVar1.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar1.PreserveAspect = true;
			pUVar1 = new MobileInputSkin();
			pUVar1.R = 1.0;
			pUVar1.G = 1.0;
			pUVar1.B = 1.0;
			pUVar1.A = 0.08;
			return pUVar1;
		}
		return pUVar1;
	}

	[Token(Token = "0x60046C5")]
	[Address(RVA = "0x5B68A20", Offset = "0x5B67A20", VA = "0x5B68A20")]
	public MobileInputSkin GetJoystickReelInSkin()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetJoystickReelInSkin): clean
		MobileInputSkin pUVar1;

		if (Il2CppMethodInitialized_07547921 == false) {
			Il2CppMethodInitialized_07547921 = true;
			pUVar1 = this.JoystickReelInSkin;
		}
		else {
			pUVar1 = this.JoystickReelInSkin;
		}
		if (pUVar1 == null) {
			pUVar1.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar1.PreserveAspect = true;
			pUVar1 = new MobileInputSkin();
			pUVar1.R = 1.0;
			pUVar1.G = 0.15;
			pUVar1.B = 0.12;
			pUVar1.A = 0.24;
			return pUVar1;
		}
		return pUVar1;
	}

	[Token(Token = "0x60046C6")]
	[Address(RVA = "0x5B68AC0", Offset = "0x5B67AC0", VA = "0x5B68AC0")]
	public MobileInputSkin GetJoystickReelOutSkin()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetJoystickReelOutSkin): clean
		MobileInputSkin pUVar1;

		if (Il2CppMethodInitialized_07547922 == false) {
			Il2CppMethodInitialized_07547922 = true;
			pUVar1 = this.JoystickReelOutSkin;
		}
		else {
			pUVar1 = this.JoystickReelOutSkin;
		}
		if (pUVar1 == null) {
			pUVar1.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar1.PreserveAspect = true;
			pUVar1 = new MobileInputSkin();
			pUVar1.R = 0.15;
			pUVar1.G = 0.95;
			pUVar1.B = 0.45;
			pUVar1.A = 0.22;
			return pUVar1;
		}
		return pUVar1;
	}

	[Token(Token = "0x60046C7")]
	[Address(RVA = "0x5B68520", Offset = "0x5B67520", VA = "0x5B68520")]
	public float GetJoystickBaseScale()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetJoystickBaseScale): clean
		float fVar1;
		float fVar2;

		fVar1 = this.JoystickBaseScale;
		fVar2 = 2.0;
		if (fVar1 <= 2.0) {
			fVar2 = fVar1;
		}
		return (float)(~-(uint)(0.0 < fVar1) & 0x3ee66666 |(~-(uint)(0.01 <= fVar1) & 0x3c23d70a | (uint)fVar2 & -(uint)(0.01 <= fVar1)) & -(uint)(0.0 < fVar1));
	}

	[Token(Token = "0x60046C8")]
	[Address(RVA = "0x5B688B0", Offset = "0x5B678B0", VA = "0x5B688B0")]
	public float GetJoystickHandleScale()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetJoystickHandleScale): clean
		float fVar1;
		float fVar2;

		fVar1 = this.JoystickHandleScale;
		fVar2 = 2.0;
		if (fVar1 <= 2.0) {
			fVar2 = fVar1;
		}
		return (float)(~-(uint)(0.0 < fVar1) & 0x3edc28f6 |(~-(uint)(0.01 <= fVar1) & 0x3c23d70a | (uint)fVar2 & -(uint)(0.01 <= fVar1)) & -(uint)(0.0 < fVar1));
	}

	[Token(Token = "0x60046C9")]
	[Address(RVA = "0x5B68570", Offset = "0x5B67570", VA = "0x5B68570")]
	public float GetJoystickReelOutRingDiameter()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetJoystickReelOutRingDiameter): clean
		float fVar1;
		float fVar2;

		fVar1 = this.JoystickReelOutRingDiameter;
		fVar2 = 1.0;
		if (1.0 <= fVar1) {
			fVar2 = fVar1;
		}
		return (float)(~-(uint)(0.0 < fVar1) & 0x43be0000 | (uint)fVar2 & -(uint)(0.0 < fVar1));
	}

	[Token(Token = "0x60046CA")]
	[Address(RVA = "0x5B6D430", Offset = "0x5B6C430", VA = "0x5B6D430")]
	public MobileInputSkin GetIcon()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetIcon): clean
		MobileInputSkin pUVar1;

		if (Il2CppMethodInitialized_07547923 == false) {
			Il2CppMethodInitialized_07547923 = true;
			pUVar1 = this.Icon;
		}
		else {
			pUVar1 = this.Icon;
		}
		if (pUVar1 == null) {
			pUVar1.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar1.PreserveAspect = true;
			pUVar1 = new MobileInputSkin();
			pUVar1.R = 1.0;
			pUVar1.G = 1.0;
			pUVar1.B = 1.0;
			pUVar1.A = 0.9;
			return pUVar1;
		}
		return pUVar1;
	}

	[Token(Token = "0x60046CB")]
	[Address(RVA = "0x5B6D650", Offset = "0x5B6C650", VA = "0x5B6D650")]
	public float GetIconSize()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$GetIconSize): clean
		float fVar1;
		float fVar2;

		fVar1 = this.IconSize;
		fVar2 = 2.0;
		if (fVar1 <= 2.0) {
			fVar2 = fVar1;
		}
		return (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
	}

	[Token(Token = "0x60046CC")]
	[Address(RVA = "0x5B72DF0", Offset = "0x5B71DF0", VA = "0x5B72DF0")]
	public MobileInputControlLayout Clone()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$Clone): 5 lines keep C-only constructs
		List<MobileInputControlLayout> source;
		object @object;
		float fVar1;
		float fVar2;
		float fVar3;
		MobileInputControlLayout __this_00;
		String pSVar4;
		MobileInputSkin pUVar5;
		MethodInfo pMVar6;
		UI_MobileInputControlLayout___c_StaticFields pUVar7;
		Func<MobileInputControlLayout, MobileInputControlLayout> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		List<MobileInputControlLayout> __this_02;
		Guid local_38;

		__this_00 = new MobileInputControlLayout();
		local_38 = (Guid)Guid.NewGuid();
		pSVar4 = local_38.ToString("N");
		if (__this_00 == null) {
	label_05c73208: ;
			throw new NullReferenceException();
		}
		__this_00.Id = pSVar4;
		pMVar6 = (MethodInfo)this.Label;
		__this_00.Label = (String)pMVar6;
		pUVar5 = this.Icon;
		if (pUVar5 == null) {
			pUVar5 = null;
		}
		else {
			pUVar5 = pUVar5.Clone();
		}
		__this_00.Icon = pUVar5;
		__this_00.IconSize = this.IconSize;
		__this_00.Actions = this.Actions;
		__this_00.Kind = this.Kind;
		__this_00.Shape = this.Shape;
		pMVar6 = (MethodInfo)this.PopupMode;
		__this_00.PopupMode = (String)pMVar6;
		fVar1 = this.Y;
		fVar2 = this.Width;
		fVar3 = this.Height;
		__this_00.X = this.X;
		__this_00.Y = fVar1;
		__this_00.Width = fVar2;
		__this_00.Height = fVar3;
		pUVar5 = this.Skin;
		if (pUVar5 == null) {
			pMVar6 = null;
		}
		else {
			pMVar6 = (MethodInfo)pUVar5.Clone();
		}
		__this_00.Skin = (MobileInputSkin)pMVar6;
		pUVar5 = this.OnSkin;
		if (pUVar5 == null) {
			pMVar6 = null;
		}
		else {
			pMVar6 = (MethodInfo)pUVar5.Clone();
		}
		__this_00.OnSkin = (MobileInputSkin)pMVar6;
		pUVar5 = this.JoystickHandleSkin;
		if (pUVar5 == null) {
			pMVar6 = null;
		}
		else {
			pMVar6 = (MethodInfo)pUVar5.Clone();
		}
		__this_00.JoystickHandleSkin = (MobileInputSkin)pMVar6;
		pUVar5 = this.JoystickActiveSkin;
		if (pUVar5 == null) {
			pMVar6 = null;
		}
		else {
			pMVar6 = (MethodInfo)pUVar5.Clone();
		}
		__this_00.JoystickActiveSkin = (MobileInputSkin)pMVar6;
		pUVar5 = this.JoystickRingSkin;
		if (pUVar5 == null) {
			pMVar6 = null;
		}
		else {
			pMVar6 = (MethodInfo)pUVar5.Clone();
		}
		__this_00.JoystickRingSkin = (MobileInputSkin)pMVar6;
		pUVar5 = this.JoystickReelInSkin;
		if (pUVar5 == null) {
			pMVar6 = null;
		}
		else {
			pMVar6 = (MethodInfo)pUVar5.Clone();
		}
		__this_00.JoystickReelInSkin = (MobileInputSkin)pMVar6;
		pUVar5 = this.JoystickReelOutSkin;
		if (pUVar5 == null) {
			pUVar5 = null;
		}
		else {
			pUVar5 = pUVar5.Clone();
		}
		__this_00.JoystickReelOutSkin = pUVar5;
		fVar1 = this.JoystickHandleScale;
		__this_00.JoystickBaseScale = this.JoystickBaseScale;
		__this_00.JoystickHandleScale = fVar1;
		__this_00.JoystickReelOutRingDiameter = this.JoystickReelOutRingDiameter;
		__this_00.DisableContentMovement = this.DisableContentMovement;
		__this_00.AllowLookAreaThrough = this.AllowLookAreaThrough;
		fVar1 = this.BindReelOutAngle;
		__this_00.BindReelInAngle = this.BindReelInAngle;
		__this_00.BindReelOutAngle = fVar1;
		__this_00.AimAssistOnPress = this.AimAssistOnPress;
		__this_00.AimAssistOnRelease = this.AimAssistOnRelease;
		source = this.Children;
		if (source == null) {
			__this_02 = new List<MobileInputControlLayout>() ;
		}
		else {
			if ((typeof(MobileInputControlLayout.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar7 = typeof(MobileInputControlLayout.c).static_fields;
				__this_01 = pUVar7.__9__48_0;
			}
			else {
				pUVar7 = typeof(MobileInputControlLayout.c).static_fields;
				__this_01 = pUVar7.__9__48_0;
			}
			if (__this_01 == null) {
				if (((typeof(MobileInputControlLayout.c))._2).cctor_finished_or_no_cctor == 0) {
					pUVar7 = typeof(MobileInputControlLayout.c).static_fields;
				}
				@object = (object)pUVar7.__9;
				__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<MobileInputControlLayout, MobileInputControlLayout>));
				__this_01 = new Func<@object, @object>(@object, (intptr_t)MethodInfo_UI_MobileInputControlLayout_c_Clone_b__48_0);
				pUVar7 = typeof(MobileInputControlLayout.c).static_fields;
				pUVar7.__9__48_0 = __this_01;
			}
			source_00 = Enumerable.Select<MobileInputControlLayout, MobileInputControlLayout>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_01);
			__this_02 = (List<MobileInputControlLayout>)Enumerable.ToList<MobileInputControlLayout>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
			if ((source == null) ||(__this_00 == null)) goto label_05c73208;
		}
		__this_00.Children = __this_02;
		return __this_00;
	}

	[Token(Token = "0x60046CD")]
	[Address(RVA = "0x5B6A050", Offset = "0x5B69050", VA = "0x5B6A050")]
	public bool ShouldMoveContentWithTouch()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$ShouldMoveContentWithTouch): clean
		return this.DisableContentMovement == false;
	}

	[Token(Token = "0x60046CE")]
	[Address(RVA = "0x5B67E60", Offset = "0x5B66E60", VA = "0x5B67E60")]
	public MobileInputControlLayout()
	{
		// Lifted from source/cpp/UI/MobileInputControlLayout.c (UI.MobileInputControlLayout$$.ctor): 3 lines keep C-only constructs
		String pSVar1;
		MobileInputSkin pUVar2;
		List<MobileInputControlLayout> __this_00;
		Guid local_78;
		Enum local_68;
		Enum local_50;
		Enum local_38;

		local_78 = Guid.NewGuid();
		pSVar1 = local_78.ToString("N");
		this.Id = pSVar1;
		this.Label = "BTN";
		pUVar2.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar2.PreserveAspect = true;
		pUVar2 = new MobileInputSkin();
		pUVar2.R = 1.0;
		pUVar2.G = 1.0;
		pUVar2.B = 1.0;
		pUVar2.A = 0.9;
		this.Icon = pUVar2;
		this.IconSize = 0.56;
		this.Actions = "None";
		local_38.klass = (Enum)typeof(MobileInputControlKind);
		local_38.monitor = (IntPtr)0xffffffffffffffff;
		pSVar1 = local_38.ToString();
		this.Kind = pSVar1;
		local_50.klass = (Enum)typeof(MobileInputControlShape);
		local_50.monitor = (IntPtr)0xffffffffffffffff;
		pSVar1 = local_50.ToString();
		this.Shape = pSVar1;
		this.X = 0.5;
		this.Y = 0.5;
		this.Width = 0.08;
		this.Height = 0.08;
		local_68.klass = (Enum)typeof(MobileInputPopupMode);
		local_68.monitor = (IntPtr)0xffffffffffffffff;
		pSVar1 = local_68.ToString();
		this.PopupMode = pSVar1;
		pUVar2.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar2.PreserveAspect = true;
		pUVar2 = new MobileInputSkin();
		pUVar2.R = 0.0;
		pUVar2.G = 0.0;
		pUVar2.B = 0.0;
		pUVar2.A = 0.38;
		this.Skin = pUVar2;
		pUVar2.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar2.PreserveAspect = true;
		pUVar2 = new MobileInputSkin();
		pUVar2.R = 1.0;
		pUVar2.G = 1.0;
		pUVar2.B = 1.0;
		pUVar2.A = 0.38;
		this.OnSkin = pUVar2;
		pUVar2.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar2.PreserveAspect = true;
		pUVar2 = new MobileInputSkin();
		pUVar2.R = 1.0;
		pUVar2.G = 1.0;
		pUVar2.B = 1.0;
		pUVar2.A = 0.35;
		this.JoystickHandleSkin = pUVar2;
		pUVar2.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar2.PreserveAspect = true;
		pUVar2 = new MobileInputSkin();
		pUVar2.R = 1.0;
		pUVar2.G = 1.0;
		pUVar2.B = 1.0;
		pUVar2.A = 0.4;
		this.JoystickActiveSkin = pUVar2;
		pUVar2.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar2.PreserveAspect = true;
		pUVar2 = new MobileInputSkin();
		pUVar2.R = 1.0;
		pUVar2.G = 1.0;
		pUVar2.B = 1.0;
		pUVar2.A = 0.08;
		this.JoystickRingSkin = pUVar2;
		pUVar2.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar2.PreserveAspect = true;
		pUVar2 = new MobileInputSkin();
		pUVar2.R = 1.0;
		pUVar2.G = 0.15;
		pUVar2.B = 0.12;
		pUVar2.A = 0.24;
		this.JoystickReelInSkin = pUVar2;
		pUVar2.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar2.PreserveAspect = true;
		pUVar2 = new MobileInputSkin();
		pUVar2.R = 0.15;
		pUVar2.G = 0.95;
		pUVar2.B = 0.45;
		pUVar2.A = 0.22;
		this.JoystickReelOutSkin = pUVar2;
		this.JoystickBaseScale = 0.45;
		this.JoystickHandleScale = 0.43;
		this.JoystickReelOutRingDiameter = 380.0;
		this.BindReelInAngle = 85.0;
		this.BindReelOutAngle = 90.0;
		__this_00 = new List<MobileInputControlLayout>();
		this.Children = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileInputControlLayout.c.

	// UI.MobileInputControlLayout.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MobileInputControlLayout.c();
		MobileInputControlLayout.c.__9 = (MobileInputControlLayout.c)__this;
		return;
	}

	// UI.MobileInputControlLayout.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MobileInputControlLayout.<>c$$<Clone>b__48_0: clean
	private MobileInputControlLayout c__Clone_b__48_0(MobileInputControlLayout x)
	{
		MobileInputControlLayout pUVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		return pUVar1;
	}
}
