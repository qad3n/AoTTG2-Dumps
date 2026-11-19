// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HorseController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HorseController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x200067F")]
internal class HorseController
{
	[Token(Token = "0x4001D17")]
	[FieldOffset(Offset = "0x3C")]
	private float _recallTime;

	[Token(Token = "0x17000AE8")]
	public HorseOrder Order
	{
		[Token(Token = "0x6003E99")]
		[Address(RVA = "0x5AA69E0", Offset = "0x5AA59E0", VA = "0x5AA69E0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$get_Order): clean
			return this._Order_k__BackingField;
		}
		[Token(Token = "0x6003E9A")]
		[Address(RVA = "0x5AA69F0", Offset = "0x5AA59F0", VA = "0x5AA69F0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$set_Order): clean
			this._Order_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000AE9")]
	public int TargetViewId
	{
		[Token(Token = "0x6003E9B")]
		[Address(RVA = "0x5AA6A00", Offset = "0x5AA5A00", VA = "0x5AA6A00")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$get_TargetViewId): clean
			return this._TargetViewId_k__BackingField;
		}
		[Token(Token = "0x6003E9C")]
		[Address(RVA = "0x5AA6A10", Offset = "0x5AA5A10", VA = "0x5AA6A10")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$set_TargetViewId): clean
			this._TargetViewId_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000AEA")]
	public Vector3 Destination
	{
		[Token(Token = "0x6003E9D")]
		[Address(RVA = "0x5AA6A20", Offset = "0x5AA5A20", VA = "0x5AA6A20")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$get_Destination): clean
			return (Vector3)this._Destination_k__BackingField;
		}
		[Token(Token = "0x6003E9E")]
		[Address(RVA = "0x5AA6A30", Offset = "0x5AA5A30", VA = "0x5AA6A30")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$set_Destination): clean
			this._Destination_k__BackingField.x = value.x;
			this._Destination_k__BackingField.y = value.y;
			this._Destination_k__BackingField.z = value.z;
			return;
		}
	}

	[Token(Token = "0x17000AEB")]
	public float StoppingDistance
	{
		[Token(Token = "0x6003E9F")]
		[Address(RVA = "0x5AA6A40", Offset = "0x5AA5A40", VA = "0x5AA6A40")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$get_StoppingDistance): clean
			return this._StoppingDistance_k__BackingField;
		}
		[Token(Token = "0x6003EA0")]
		[Address(RVA = "0x5AA6A50", Offset = "0x5AA5A50", VA = "0x5AA6A50")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$set_StoppingDistance): clean
			this._StoppingDistance_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000AEC")]
	public Vector3 Direction
	{
		[Token(Token = "0x6003EA1")]
		[Address(RVA = "0x5AA6A60", Offset = "0x5AA5A60", VA = "0x5AA6A60")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$get_Direction): clean
			return (Vector3)this._Direction_k__BackingField;
		}
		[Token(Token = "0x6003EA2")]
		[Address(RVA = "0x5AA6A70", Offset = "0x5AA5A70", VA = "0x5AA6A70")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$set_Direction): clean
			this._Direction_k__BackingField.x = value.x;
			this._Direction_k__BackingField.y = value.y;
			this._Direction_k__BackingField.z = value.z;
			return;
		}
	}

	[Token(Token = "0x17000AED")]
	public bool Moving
	{
		[Token(Token = "0x6003EA3")]
		[Address(RVA = "0x5AA6A80", Offset = "0x5AA5A80", VA = "0x5AA6A80")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$get_Moving): clean
			return this._Moving_k__BackingField;
		}
		[Token(Token = "0x6003EA4")]
		[Address(RVA = "0x5AA6A90", Offset = "0x5AA5A90", VA = "0x5AA6A90")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$set_Moving): clean
			this._Moving_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000AEE")]
	public bool Running
	{
		[Token(Token = "0x6003EA5")]
		[Address(RVA = "0x5AA6AA0", Offset = "0x5AA5AA0", VA = "0x5AA6AA0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$get_Running): clean
			return this._Running_k__BackingField;
		}
		[Token(Token = "0x6003EA6")]
		[Address(RVA = "0x5AA6AB0", Offset = "0x5AA5AB0", VA = "0x5AA6AB0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$set_Running): clean
			this._Running_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000AEF")]
	public bool WantsRecall
	{
		[Token(Token = "0x6003EA7")]
		[Address(RVA = "0x5AA6AC0", Offset = "0x5AA5AC0", VA = "0x5AA6AC0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$get_WantsRecall): clean
			return this._WantsRecall_k__BackingField;
		}
		[Token(Token = "0x6003EA8")]
		[Address(RVA = "0x5AA6AD0", Offset = "0x5AA5AD0", VA = "0x5AA6AD0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$set_WantsRecall): clean
			this._WantsRecall_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000AF0")]
	public int Revision
	{
		[Token(Token = "0x6003EA9")]
		[Address(RVA = "0x5AA6AE0", Offset = "0x5AA5AE0", VA = "0x5AA6AE0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$get_Revision): clean
			return this._Revision_k__BackingField;
		}
		[Token(Token = "0x6003EAA")]
		[Address(RVA = "0x5AA6AF0", Offset = "0x5AA5AF0", VA = "0x5AA6AF0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$set_Revision): clean
			this._Revision_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6003EAB")]
	[Address(RVA = "0x5AA6B00", Offset = "0x5AA5B00", VA = "0x5AA6B00")]
	public bool TrySetOrder(HorseOrder order, int targetViewId, Vector3 destination, float stoppingDistance, bool hasAuthority, bool alive, bool mounted)
	{
		// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$TrySetOrder): 14 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte[] auVar3 = new byte[16];
		uint uVar4;
		MethodInfo method_00;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar6;
		byte[] auVar5 = new byte[16];
		int iVar7;
		float fVar8;
		int iVar9;
		float fVar10;

		if (3 < (uint)order) {
			return false;
		}
		if (!hasAuthority) {
			return false;
		}
		if (!alive) {
			return false;
		}
		if (stoppingDistance < 0.5) {
			return false;
		}
		method_00 = (MethodInfo)(ulong)((uint)stoppingDistance & 0x7f800000);
		if (((uint)stoppingDistance & 0x7f800000) == 0x7f800000) {
			return false;
		}
		auVar3._8_4_ = in_XMM0_Dc;
		auVar3._0_8_ = destination._0_8_;
		auVar3._12_4_ = in_XMM0_Dd;
		iVar7 = -(uint)(SUB164(auVar3 & _DAT_01008860, 0) == (int)g_data_01008860);
		iVar9 = -(uint)(SUB164(auVar3 & _DAT_01008860, 4) == g_data_01008860._4_4_);
		auVar5._4_4_ = iVar7;
		auVar5._0_4_ = iVar7;
		auVar5._8_4_ = iVar9;
		auVar5._12_4_ = iVar9;
		iVar7 = movmskpd(0, auVar5);
		if (iVar7 != 0) {
			return false;
		}
		if ((~(uint)destination.z & 0x7f800000) == 0) {
			return false;
		}
		if ((0xfffffffd < order - 3U) && (targetViewId < 1)) {
			return false;
		}
		if (((order & 0xfffffffeU) == 2) && (mounted)) {
			return false;
		}
		if (this._Order_k__BackingField == order) {
			uVar4 = 0;
			if (order - 1U < 2) {
				uVar4 = targetViewId;
			}
			if ((this._TargetViewId_k__BackingField == uVar4) &&(uVar1 = this._Destination_k__BackingField.x, uVar2 = this._Destination_k__BackingField.y, fVar6 = (float)uVar2 - destination.y, fVar8 = this._Destination_k__BackingField.z - destination.z, fVar10 = (float)uVar1 - destination.x, fVar6 * fVar6 + fVar10 * fVar10 + fVar8 * fVar8 < 9.9999994e-11)) {
				fVar6 = this._StoppingDistance_k__BackingField;
				if ((fVar6 == stoppingDistance) && (!NAN(fVar6) && !NAN(stoppingDistance))) {
					return true;
				}
			}
		}
		this.ApplyOrder(order, targetViewId, destination, stoppingDistance);
		return true;
	}

	[Token(Token = "0x6003EAC")]
	[Address(RVA = "0x5AA6C50", Offset = "0x5AA5C50", VA = "0x5AA6C50")]
	public void ApplyOrder(HorseOrder order, int targetViewId, Vector3 destination, float stoppingDistance)
	{
		// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$ApplyOrder): 2 lines keep C-only constructs
		int piVar1;
		float fVar2;
		float fVar4;
		int iVar5;

		this._Order_k__BackingField = order;
		iVar5 = 0;
		if (order - 1U < 2) {
			iVar5 = targetViewId;
		}
		this._TargetViewId_k__BackingField = iVar5;
		this._Destination_k__BackingField.x = destination.x;
		this._Destination_k__BackingField.y = destination.y;
		this._Destination_k__BackingField.z = destination.z;
		this._StoppingDistance_k__BackingField = stoppingDistance;
		this._WantsRecall_k__BackingField = false;
		this._Moving_k__BackingField = false;
		this._Running_k__BackingField = false;
		fVar4 = (Vector3.zeroVector).y;
		fVar2 = (Vector3.zeroVector).z;
		this._Direction_k__BackingField.x = (Vector3.zeroVector).x;
		this._Direction_k__BackingField.y = fVar4;
		this._Direction_k__BackingField.z = fVar2;
		this._recallTime = 0.0;
		piVar1 = &this._Revision_k__BackingField;
		*piVar1 = *piVar1 + 1;
		return;
	}

	[Token(Token = "0x6003EAD")]
	[Address(RVA = "0x5AA6CD0", Offset = "0x5AA5CD0", VA = "0x5AA6CD0")]
	public void Tick(Vector3 position, Vector3 velocity, bool grounded, bool mounted, Vector3? targetPosition, bool recallEnabled, float deltaTime)
	{
		// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$Tick): 38 lines keep C-only constructs
		int piVar1;
		float fVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		float fVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		UnityEngine_Vector3_StaticFields pUVar11;
		Vector3 pUVar12;
		bool bVar13;
		float fVar14;
		float fVar15;
		uint extraout_XMM0_Db;
		uint in_XMM0_Dc;
		float extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		float extraout_XMM0_Dd;
		byte[] auVar16 = new byte[16];
		float fVar17;
		float fVar18;
		float fVar19;
		Vector3 UVar20;
		byte[] local_90 = new byte[12];
		float fStack_84;
		float fStack_80;
		float fStack_7c;
		float local_78;
		float fStack_70;
		float fStack_6c;
		byte[] local_68 = new byte[16];
		float local_58;
		Vector3[] local_48 = new Vector3[2];

		fVar15 = position.z;
		local_48[0].x = velocity.x;
		local_48[0].y = velocity.y;
		fStack_80 = (float)in_XMM0_Dc;
		fStack_7c = (float)in_XMM0_Dd;
		local_68[0] = targetPosition.hasValue;
		local_68._1_3_ = targetPosition._1_3_;
		local_68._4_4_ = targetPosition.value.x;
		local_68._8_4_ = targetPosition.value.y;
		local_68._12_4_ = targetPosition.value.z;
		this._WantsRecall_k__BackingField = false;
		pUVar12 = typeof(Vector3);
		pUVar11 = typeof(Vector3).static_fields;
		fVar3 = (pUVar11.zeroVector).y;
		fVar17 = (pUVar11.zeroVector).z;
		this._Direction_k__BackingField.x = (pUVar11.zeroVector).x;
		this._Direction_k__BackingField.y = fVar3;
		this._Direction_k__BackingField.z = fVar17;
		uVar9 = this._Order_k__BackingField;
		if (mounted) {
			if ((uVar9 & 0xfffffffe) == 2) {
				this._Order_k__BackingField = 0;
				this._TargetViewId_k__BackingField = 0;
				this._Destination_k__BackingField.x = (float)local_90._8_4_;
				this._Destination_k__BackingField.y = fStack_84;
				this._Destination_k__BackingField.z = fVar15;
				this._WantsRecall_k__BackingField = false;
				this._Moving_k__BackingField = false;
				this._Running_k__BackingField = false;
				pUVar11 = pUVar12.static_fields;
				fVar17 = (pUVar11.zeroVector).y;
				fVar15 = (pUVar11.zeroVector).z;
				this._Direction_k__BackingField.x = (pUVar11.zeroVector).x;
				this._Direction_k__BackingField.y = fVar17;
				this._Direction_k__BackingField.z = fVar15;
				piVar1 = &this._Revision_k__BackingField;
				*piVar1 = *piVar1 + 1;
			}
	label_05ba6df1: ;
			this._Moving_k__BackingField = false;
			this._Running_k__BackingField = false;
			goto label_05ba6df9;
		}
		if (uVar9 == 3) {
			fVar3 = this._Destination_k__BackingField.x;
			fVar6 = this._Destination_k__BackingField.y;
			fVar18 = 0.0;
			fVar14 = 0.0;
			fVar17 = this._Destination_k__BackingField.z;
		}
		else {
			if (uVar9 == 0) goto label_05ba6df1;
			if (targetPosition.hasValue == false) {
				this._Order_k__BackingField = 0;
				this._TargetViewId_k__BackingField = 0;
				this._Destination_k__BackingField.x = (float)local_90._8_4_;
				this._Destination_k__BackingField.y = fStack_84;
				this._Destination_k__BackingField.z = fVar15;
				this._WantsRecall_k__BackingField = false;
				this._Moving_k__BackingField = false;
				this._Running_k__BackingField = false;
				goto label_05ba722a;
			}
			UVar20 = local_68.Value;
			fVar17 = UVar20.z;
			fVar3 = UVar20.x;
			fVar6 = UVar20.y;
			fVar18 = extraout_XMM0_Dc;
			fVar14 = extraout_XMM0_Dd;
		}
		fVar6 = fVar6 - fStack_84;
		local_78 = fVar3 - (float)local_90._8_4_;
		fStack_70 = fVar18 - fStack_80;
		fStack_6c = fVar14 - fStack_7c;
		fVar17 = fVar17 - fVar15;
		local_58 = local_78 * local_78;
		fVar3 = fVar6 * fVar6 + local_78 * local_78 + fVar17 * fVar17;
		if (fVar3 < 0.0) {
			fVar3 = sqrtf(fVar3);
		}
		else {
			fVar3 = SQRT(fVar3);
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar10 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar10 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar10 == 0) {
		}
		fVar18 = fVar17 * fVar17 + local_58 + 0.0;
		if (fVar18 < 0.0) {
			fVar14 = sqrtf(fVar18);
		}
		else {
			fVar14 = SQRT(fVar18);
		}
		fVar19 = 0.0;
		fVar2 = this._StoppingDistance_k__BackingField;
		if (this._Order_k__BackingField == 1) {
			if (this._Moving_k__BackingField == false) {
				fVar19 = 2.0;
			}
			else {
				fVar19 = 0.0;
			}
		}
		fVar19 = fVar2 + fVar19;
		this._Moving_k__BackingField = fVar19 < fVar14;
		this._Running_k__BackingField = 20.0 <= fVar14 && fVar19 < fVar14;
		if (fVar14 <= fVar19) {
			pUVar11 = typeof(Vector3).static_fields;
			uVar4 = (pUVar11.zeroVector).x;
			uVar7 = (pUVar11.zeroVector).y;
			fVar17 = (pUVar11.zeroVector).z;
			uVar5 = uVar4;
			uVar8 = uVar7;
		}
		else {
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_90._0_4_ = 0.0;
				local_90._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_05ba7109;
	label_05ba702c: ;
				local_90._0_4_ = 0.0;
				local_90._4_4_ = 0.0;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05ba703c;
	label_05ba7131: ;
				if (fVar18 < 0.0) goto label_05ba7147;
	label_05ba7048: ;
				uVar5 = 0;
				fVar18 = SQRT(fVar18);
				if (fVar18 <= 1e-05) goto label_05ba7062;
	label_05ba7162: ;
				fVar17 = fVar17 / fVar18;
				auVar16._4_4_ = fVar18;
				auVar16._0_4_ = fVar18;
				auVar16._8_4_ = uVar5;
				auVar16._12_4_ = uVar5;
				auVar16 = divps(ZEXT416((uint)local_78), auVar16);
				local_90._0_4_ = auVar16._0_4_;
				local_90._4_4_ = auVar16._4_4_;
				pUVar11 = (UnityEngine_Vector3_StaticFields)local_90;
			}
			else {
				local_90._0_4_ = 0.0;
				local_90._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_05ba702c;
	label_05ba7109: ;
				local_90._0_4_ = 0.0;
				local_90._4_4_ = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05ba7131;
	label_05ba703c: ;
				if (0.0 <= fVar18) goto label_05ba7048;
	label_05ba7147: ;
				fVar18 = sqrtf(fVar18);
				uVar5 = extraout_XMM0_Db;
				if (1e-05 < fVar18) goto label_05ba7162;
	label_05ba7062: ;
				pUVar11 = typeof(Vector3).static_fields;
				fVar17 = (pUVar11.zeroVector).z;
			}
			uVar5 = (pUVar11.zeroVector).x;
			uVar8 = (pUVar11.zeroVector).y;
		}
		this._Direction_k__BackingField.x = (float)uVar5;
		this._Direction_k__BackingField.y = (float)uVar8;
		this._Direction_k__BackingField.z = fVar17;
		bVar13 = false;
		if (ABS(fVar6) <= 3.0 && fVar14 <= fVar2) {
			bVar13 = this._Order_k__BackingField != 1;
		}
		if ((bVar13 & grounded) != 0) {
			if (velocity.z * velocity.z + local_48[0].y * local_48[0].y + local_48[0].x * local_48[0].x < 1.0) {
				this._Order_k__BackingField = 0;
				this._TargetViewId_k__BackingField = 0;
				this._Destination_k__BackingField.x = (float)local_90._8_4_;
				this._Destination_k__BackingField.y = fStack_84;
				this._Destination_k__BackingField.z = fVar15;
				this._WantsRecall_k__BackingField = false;
				this._Moving_k__BackingField = false;
				this._Running_k__BackingField = false;
				pUVar12 = typeof(Vector3);
	label_05ba722a: ;
				pUVar11 = pUVar12.static_fields;
				fVar17 = (pUVar11.zeroVector).y;
				fVar15 = (pUVar11.zeroVector).z;
				this._Direction_k__BackingField.x = (pUVar11.zeroVector).x;
				this._Direction_k__BackingField.y = fVar17;
				this._Direction_k__BackingField.z = fVar15;
				this._recallTime = 0.0;
				piVar1 = &this._Revision_k__BackingField;
				*piVar1 = *piVar1 + 1;
				return;
			}
		}
		if ((recallEnabled) && (this._Order_k__BackingField != 3)) {
			fVar15 = this._StoppingDistance_k__BackingField;
			fVar17 = 20.0;
			if (20.0 <= fVar15) {
				fVar17 = fVar15;
			}
			if (fVar17 < fVar3) {
				fVar15 = deltaTime + this._recallTime;
				this._recallTime = fVar15;
				if (fVar15 < 10.0) {
					return;
				}
				this._WantsRecall_k__BackingField = true;
			}
		}
	label_05ba6df9: ;
		this._recallTime = 0.0;
		return;
	}

	[Token(Token = "0x6003EAE")]
	[Address(RVA = "0x5AA6C10", Offset = "0x5AA5C10", VA = "0x5AA6C10")]
	public static bool IsFinite(float value)
	{
		// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$IsFinite): clean
		return (~(uint)value & 0x7f800000) != 0;
	}

	[Token(Token = "0x6003EAF")]
	[Address(RVA = "0x5AA6C20", Offset = "0x5AA5C20", VA = "0x5AA6C20")]
	public static bool IsFinite(Vector3 value)
	{
		// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$IsFinite): 12 lines keep C-only constructs
		uint in_EAX;
		ulong in_XMM0_Qb;
		byte[] auVar1 = new byte[16];
		int iVar3;
		byte[] auVar2 = new byte[16];

		auVar1._0_8_ = value._0_8_;
		auVar1._8_8_ = in_XMM0_Qb;
		auVar2._0_4_ = -(uint)(SUB164(auVar1 & _DAT_01008860, 0) == (int)g_data_01008860);
		iVar3 = -(uint)(SUB164(auVar1 & _DAT_01008860, 4) == g_data_01008860._4_4_);
		auVar2._4_4_ = auVar2._0_4_;
		auVar2._8_4_ = iVar3;
		auVar2._12_4_ = iVar3;
		iVar3 = movmskpd(in_EAX, auVar2);
		if (iVar3 == 0) {
			return (~(uint)value.z & 0x7f800000) != 0;
		}
		return false;
	}

	[Token(Token = "0x6003EB0")]
	[Address(RVA = "0x5AA72C0", Offset = "0x5AA62C0", VA = "0x5AA72C0")]
	public HorseController()
	{
		// Lifted from source/cpp/Controllers/HorseController.c (Controllers.HorseController$$.ctor): clean
		this._StoppingDistance_k__BackingField = 5.0;
		base();
		return;
	}
}
