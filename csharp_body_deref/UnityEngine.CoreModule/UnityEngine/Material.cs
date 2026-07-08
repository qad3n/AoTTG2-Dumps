using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000C3")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Material.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
public class Material : Object
{
	[Token(Token = "0x170000E5")]
	public Shader shader
	{
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x4AA2610", Offset = "0x4AA2610", VA = "0x4AA2610")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x4AA26E0", Offset = "0x4AA26E0", VA = "0x4AA26E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E6")]
	public Color color
	{
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x4AA2820", Offset = "0x4AA2820", VA = "0x4AA2820")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000467")]
		[Address(RVA = "0x4AA2A20", Offset = "0x4AA2A20", VA = "0x4AA2A20")]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public Texture mainTexture
	{
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x4AA2D80", Offset = "0x4AA2D80", VA = "0x4AA2D80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x4AA3080", Offset = "0x4AA3080", VA = "0x4AA3080")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public Vector2 mainTextureOffset
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x4AA31F0", Offset = "0x4AA31F0", VA = "0x4AA31F0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x4AA3360", Offset = "0x4AA3360", VA = "0x4AA3360")]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	public Vector2 mainTextureScale
	{
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x4AA36B0", Offset = "0x4AA36B0", VA = "0x4AA36B0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x4AA3810", Offset = "0x4AA3810", VA = "0x4AA3810")]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	public int renderQueue
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x4AA3D50", Offset = "0x4AA3D50", VA = "0x4AA3D50")]
		[UnityEngine.Bindings.NativeName("SetCustomRenderQueue")]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	internal int rawRenderQueue
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x4AA3E30", Offset = "0x4AA3E30", VA = "0x4AA3E30")]
		[UnityEngine.Bindings.NativeName("GetCustomRenderQueue")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000EC")]
	public MaterialGlobalIlluminationFlags globalIlluminationFlags
	{
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x4AA41A0", Offset = "0x4AA41A0", VA = "0x4AA41A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000ED")]
	[UnityEngine.Bindings.NativeProperty("EnableInstancingVariants")]
	public bool enableInstancing
	{
		[Token(Token = "0x6000477")]
		[Address(RVA = "0x4A9B150", Offset = "0x4A9B150", VA = "0x4A9B150")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x4AA42B0", Offset = "0x4AA42B0", VA = "0x4AA42B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public int passCount
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x4AA4390", Offset = "0x4AA4390", VA = "0x4AA4390")]
		[UnityEngine.Bindings.NativeName("GetShader()->GetPassCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000EF")]
	public string[] shaderKeywords
	{
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x4AA4A00", Offset = "0x4AA4A00", VA = "0x4AA4A00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000481")]
		[Address(RVA = "0x4AA4AA0", Offset = "0x4AA4AA0", VA = "0x4AA4AA0")]
		set
		{
		}
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x4AA2270", Offset = "0x4AA2270", VA = "0x4AA2270")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CreateWithShader")]
	private static void CreateWithShader([UnityEngine.Writable] Material self, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Shader shader)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x4AA2390", Offset = "0x4AA2390", VA = "0x4AA2390")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CreateWithMaterial")]
	private static void CreateWithMaterial([UnityEngine.Writable] Material self, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Material source)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000460")]
	[Address(RVA = "0x4AA24B0", Offset = "0x4AA24B0", VA = "0x4AA24B0")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CreateWithString")]
	private static extern void CreateWithString([UnityEngine.Writable] Material self);

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x4AA24E0", Offset = "0x4AA24E0", VA = "0x4AA24E0")]
	public Material(Shader shader)
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x4AA2540", Offset = "0x4AA2540", VA = "0x4AA2540")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Material(Material source)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x4AA25A0", Offset = "0x4AA25A0", VA = "0x4AA25A0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Creating materials from shader source string is no longer supported. Use Shader assets instead.", false)]
	public Material(string contents)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x4AA2920", Offset = "0x4AA2920", VA = "0x4AA2920")]
	[UnityEngine.Bindings.NativeName("GetFirstPropertyNameIdByAttributeFromScript")]
	private int GetFirstPropertyNameIdByAttribute(ShaderPropertyFlags attributeFlag)
	{
		return default(int);
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x4AA3BA0", Offset = "0x4AA3BA0", VA = "0x4AA3BA0")]
	[UnityEngine.Bindings.NativeName("HasPropertyFromScript")]
	public bool HasProperty(int nameID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x4AA3C80", Offset = "0x4AA3C80", VA = "0x4AA3C80")]
	public bool HasProperty(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x4AA3F00", Offset = "0x4AA3F00", VA = "0x4AA3F00")]
	public void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x4AA3FE0", Offset = "0x4AA3FE0", VA = "0x4AA3FE0")]
	public void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x4AA40C0", Offset = "0x4AA40C0", VA = "0x4AA40C0")]
	public bool IsKeywordEnabled(string keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x4AA4460", Offset = "0x4AA4460", VA = "0x4AA4460")]
	public int FindPass(string passName)
	{
		return default(int);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x4AA4540", Offset = "0x4AA4540", VA = "0x4AA4540")]
	public void SetOverrideTag(string tag, string val)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x4AA4630", Offset = "0x4AA4630", VA = "0x4AA4630")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::SetPass", HasExplicitThis = true)]
	public bool SetPass(int pass)
	{
		return default(bool);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x4AA4710", Offset = "0x4AA4710", VA = "0x4AA4710")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CopyPropertiesFrom", HasExplicitThis = true)]
	public void CopyPropertiesFromMaterial(Material mat)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x4AA4850", Offset = "0x4AA4850", VA = "0x4AA4850")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::GetShaderKeywords", HasExplicitThis = true)]
	private string[] GetShaderKeywords()
	{
		return null;
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x4AA4920", Offset = "0x4AA4920", VA = "0x4AA4920")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::SetShaderKeywords", HasExplicitThis = true)]
	private void SetShaderKeywords(string[] names)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x4AA4B40", Offset = "0x4AA4B40", VA = "0x4AA4B40")]
	public int ComputeCRC()
	{
		return default(int);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x4AA4C10", Offset = "0x4AA4C10", VA = "0x4AA4C10")]
	[UnityEngine.Bindings.NativeName("SetIntFromScript")]
	private void SetIntImpl(int name, int value)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4AA4D00", Offset = "0x4AA4D00", VA = "0x4AA4D00")]
	[UnityEngine.Bindings.NativeName("SetFloatFromScript")]
	private void SetFloatImpl(int name, float value)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4AA4DF0", Offset = "0x4AA4DF0", VA = "0x4AA4DF0")]
	[UnityEngine.Bindings.NativeName("SetColorFromScript")]
	private void SetColorImpl(int name, Color value)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x4AA4EE0", Offset = "0x4AA4EE0", VA = "0x4AA4EE0")]
	[UnityEngine.Bindings.NativeName("SetMatrixFromScript")]
	private void SetMatrixImpl(int name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x4AA4FD0", Offset = "0x4AA4FD0", VA = "0x4AA4FD0")]
	[UnityEngine.Bindings.NativeName("SetTextureFromScript")]
	private void SetTextureImpl(int name, Texture value)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x4AA5110", Offset = "0x4AA5110", VA = "0x4AA5110")]
	[UnityEngine.Bindings.NativeName("SetBufferFromScript")]
	private void SetGraphicsBufferImpl(int name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x4AA5200", Offset = "0x4AA5200", VA = "0x4AA5200")]
	[UnityEngine.Bindings.NativeName("SetConstantBufferFromScript")]
	private void SetConstantBufferImpl(int name, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4AA5310", Offset = "0x4AA5310", VA = "0x4AA5310")]
	[UnityEngine.Bindings.NativeName("GetFloatFromScript")]
	private float GetFloatImpl(int name)
	{
		return default(float);
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4AA53F0", Offset = "0x4AA53F0", VA = "0x4AA53F0")]
	[UnityEngine.Bindings.NativeName("GetColorFromScript")]
	private Color GetColorImpl(int name)
	{
		return default(Color);
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x4AA54F0", Offset = "0x4AA54F0", VA = "0x4AA54F0")]
	[UnityEngine.Bindings.NativeName("GetTextureFromScript")]
	private Texture GetTextureImpl(int name)
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x4AA55D0", Offset = "0x4AA55D0", VA = "0x4AA55D0")]
	[UnityEngine.Bindings.NativeName("GetTextureScaleAndOffsetFromScript")]
	private Vector4 GetTextureScaleAndOffsetImpl(int name)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4AA56D0", Offset = "0x4AA56D0", VA = "0x4AA56D0")]
	[UnityEngine.Bindings.NativeName("SetTextureOffsetFromScript")]
	private void SetTextureOffsetImpl(int name, Vector2 offset)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4AA57C0", Offset = "0x4AA57C0", VA = "0x4AA57C0")]
	[UnityEngine.Bindings.NativeName("SetTextureScaleFromScript")]
	private void SetTextureScaleImpl(int name, Vector2 scale)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4AA58B0", Offset = "0x4AA58B0", VA = "0x4AA58B0")]
	public void SetInt(string name, int value)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4AA59A0", Offset = "0x4AA59A0", VA = "0x4AA59A0")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x4AA5A80", Offset = "0x4AA5A80", VA = "0x4AA5A80")]
	public void SetFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4AA5B30", Offset = "0x4AA5B30", VA = "0x4AA5B30")]
	public void SetInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4AA2C90", Offset = "0x4AA2C90", VA = "0x4AA2C90")]
	public void SetColor(string name, Color value)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4AA2BE0", Offset = "0x4AA2BE0", VA = "0x4AA2BE0")]
	public void SetColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x4AA5BE0", Offset = "0x4AA5BE0", VA = "0x4AA5BE0")]
	public void SetVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4AA5CD0", Offset = "0x4AA5CD0", VA = "0x4AA5CD0")]
	public void SetVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4AA5D80", Offset = "0x4AA5D80", VA = "0x4AA5D80")]
	public void SetMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4AA5E80", Offset = "0x4AA5E80", VA = "0x4AA5E80")]
	public void SetMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4AA31A0", Offset = "0x4AA31A0", VA = "0x4AA31A0")]
	public void SetTexture(string name, Texture value)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4AA3190", Offset = "0x4AA3190", VA = "0x4AA3190")]
	public void SetTexture(int nameID, Texture value)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4AA5F60", Offset = "0x4AA5F60", VA = "0x4AA5F60")]
	public void SetBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4AA6040", Offset = "0x4AA6040", VA = "0x4AA6040")]
	public void SetConstantBuffer(int nameID, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4AA6100", Offset = "0x4AA6100", VA = "0x4AA6100")]
	public float GetFloat(string name)
	{
		return default(float);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4AA61D0", Offset = "0x4AA61D0", VA = "0x4AA61D0")]
	public float GetFloat(int nameID)
	{
		return default(float);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4AA29D0", Offset = "0x4AA29D0", VA = "0x4AA29D0")]
	public Color GetColor(string name)
	{
		return default(Color);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4AA29C0", Offset = "0x4AA29C0", VA = "0x4AA29C0")]
	public Color GetColor(int nameID)
	{
		return default(Color);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4AA6270", Offset = "0x4AA6270", VA = "0x4AA6270")]
	public Vector4 GetVector(string name)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4AA62C0", Offset = "0x4AA62C0", VA = "0x4AA62C0")]
	public Vector4 GetVector(int nameID)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x4AA2FB0", Offset = "0x4AA2FB0", VA = "0x4AA2FB0")]
	public Texture GetTexture(string name)
	{
		return null;
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x4AA2F10", Offset = "0x4AA2F10", VA = "0x4AA2F10")]
	public Texture GetTexture(int nameID)
	{
		return null;
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4AA35C0", Offset = "0x4AA35C0", VA = "0x4AA35C0")]
	public void SetTextureOffset(string name, Vector2 value)
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x4AA3510", Offset = "0x4AA3510", VA = "0x4AA3510")]
	public void SetTextureOffset(int nameID, Vector2 value)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x4AA3A70", Offset = "0x4AA3A70", VA = "0x4AA3A70")]
	public void SetTextureScale(string name, Vector2 value)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x4AA39C0", Offset = "0x4AA39C0", VA = "0x4AA39C0")]
	public void SetTextureScale(int nameID, Vector2 value)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x4AA3310", Offset = "0x4AA3310", VA = "0x4AA3310")]
	public Vector2 GetTextureOffset(string name)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x4AA3300", Offset = "0x4AA3300", VA = "0x4AA3300")]
	public Vector2 GetTextureOffset(int nameID)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x4AA37C0", Offset = "0x4AA37C0", VA = "0x4AA37C0")]
	public Vector2 GetTextureScale(string name)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4AA37B0", Offset = "0x4AA37B0", VA = "0x4AA37B0")]
	public Vector2 GetTextureScale(int nameID)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x4AA2350", Offset = "0x4AA2350", VA = "0x4AA2350")]
	private static extern void CreateWithShader_Injected([UnityEngine.Writable] Material self, IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x4AA2470", Offset = "0x4AA2470", VA = "0x4AA2470")]
	private static extern void CreateWithMaterial_Injected([UnityEngine.Writable] Material self, IntPtr source);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x4AA26B0", Offset = "0x4AA26B0", VA = "0x4AA26B0")]
	private static extern Shader get_shader_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x4AA27E0", Offset = "0x4AA27E0", VA = "0x4AA27E0")]
	private static extern void set_shader_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x4AA3B60", Offset = "0x4AA3B60", VA = "0x4AA3B60")]
	private static extern int GetFirstPropertyNameIdByAttribute_Injected(IntPtr _unity_self, ShaderPropertyFlags attributeFlag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4AA3C40", Offset = "0x4AA3C40", VA = "0x4AA3C40")]
	private static extern bool HasProperty_Injected(IntPtr _unity_self, int nameID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x4AA3DF0", Offset = "0x4AA3DF0", VA = "0x4AA3DF0")]
	private static extern void set_renderQueue_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4AA3ED0", Offset = "0x4AA3ED0", VA = "0x4AA3ED0")]
	private static extern int get_rawRenderQueue_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4AA3FA0", Offset = "0x4AA3FA0", VA = "0x4AA3FA0")]
	private static extern void EnableKeyword_Injected(IntPtr _unity_self, string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4AA4080", Offset = "0x4AA4080", VA = "0x4AA4080")]
	private static extern void DisableKeyword_Injected(IntPtr _unity_self, string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4AA4160", Offset = "0x4AA4160", VA = "0x4AA4160")]
	private static extern bool IsKeywordEnabled_Injected(IntPtr _unity_self, string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4AA4240", Offset = "0x4AA4240", VA = "0x4AA4240")]
	private static extern void set_globalIlluminationFlags_Injected(IntPtr _unity_self, MaterialGlobalIlluminationFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x4AA4280", Offset = "0x4AA4280", VA = "0x4AA4280")]
	private static extern bool get_enableInstancing_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4AA4350", Offset = "0x4AA4350", VA = "0x4AA4350")]
	private static extern void set_enableInstancing_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x4AA4430", Offset = "0x4AA4430", VA = "0x4AA4430")]
	private static extern int get_passCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x4AA4500", Offset = "0x4AA4500", VA = "0x4AA4500")]
	private static extern int FindPass_Injected(IntPtr _unity_self, string passName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x4AA45F0", Offset = "0x4AA45F0", VA = "0x4AA45F0")]
	private static extern void SetOverrideTag_Injected(IntPtr _unity_self, string tag, string val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x4AA46D0", Offset = "0x4AA46D0", VA = "0x4AA46D0")]
	private static extern bool SetPass_Injected(IntPtr _unity_self, int pass);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x4AA4810", Offset = "0x4AA4810", VA = "0x4AA4810")]
	private static extern void CopyPropertiesFromMaterial_Injected(IntPtr _unity_self, IntPtr mat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x4AA48F0", Offset = "0x4AA48F0", VA = "0x4AA48F0")]
	private static extern string[] GetShaderKeywords_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x4AA49C0", Offset = "0x4AA49C0", VA = "0x4AA49C0")]
	private static extern void SetShaderKeywords_Injected(IntPtr _unity_self, string[] names);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x4AA4BE0", Offset = "0x4AA4BE0", VA = "0x4AA4BE0")]
	private static extern int ComputeCRC_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x4AA4CC0", Offset = "0x4AA4CC0", VA = "0x4AA4CC0")]
	private static extern void SetIntImpl_Injected(IntPtr _unity_self, int name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x4AA4DB0", Offset = "0x4AA4DB0", VA = "0x4AA4DB0")]
	private static extern void SetFloatImpl_Injected(IntPtr _unity_self, int name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x4AA4EA0", Offset = "0x4AA4EA0", VA = "0x4AA4EA0")]
	private static extern void SetColorImpl_Injected(IntPtr _unity_self, int name, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x4AA4F90", Offset = "0x4AA4F90", VA = "0x4AA4F90")]
	private static extern void SetMatrixImpl_Injected(IntPtr _unity_self, int name, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x4AA50D0", Offset = "0x4AA50D0", VA = "0x4AA50D0")]
	private static extern void SetTextureImpl_Injected(IntPtr _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x4AA51C0", Offset = "0x4AA51C0", VA = "0x4AA51C0")]
	private static extern void SetGraphicsBufferImpl_Injected(IntPtr _unity_self, int name, GraphicsBuffer value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x4AA52C0", Offset = "0x4AA52C0", VA = "0x4AA52C0")]
	private static extern void SetConstantBufferImpl_Injected(IntPtr _unity_self, int name, ComputeBuffer value, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x4AA53B0", Offset = "0x4AA53B0", VA = "0x4AA53B0")]
	private static extern float GetFloatImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x4AA54B0", Offset = "0x4AA54B0", VA = "0x4AA54B0")]
	private static extern void GetColorImpl_Injected(IntPtr _unity_self, int name, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x4AA5590", Offset = "0x4AA5590", VA = "0x4AA5590")]
	private static extern Texture GetTextureImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x4AA5690", Offset = "0x4AA5690", VA = "0x4AA5690")]
	private static extern void GetTextureScaleAndOffsetImpl_Injected(IntPtr _unity_self, int name, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x4AA5780", Offset = "0x4AA5780", VA = "0x4AA5780")]
	private static extern void SetTextureOffsetImpl_Injected(IntPtr _unity_self, int name, [In] ref Vector2 offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x4AA5870", Offset = "0x4AA5870", VA = "0x4AA5870")]
	private static extern void SetTextureScaleImpl_Injected(IntPtr _unity_self, int name, [In] ref Vector2 scale);
}
